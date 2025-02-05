<?php

namespace Rector\Core\Tests\Issues\PartialValueDocblockUpdate\Fixture;

use Shopware\Core\Framework\Context;
use Shopware\Core\Framework\Routing\Annotation\Since;
use Symfony\Component\HttpFoundation\JsonResponse;
use Symfony\Component\Routing\Annotation\Route;

class AddDefaultValueToRoute2 {
    /**
     * @required
     * @Route("/api/_admin/reset-excluded-search-term", name="api.admin.reset-excluded-search-term", methods={"POST"})
     *
     * @return JsonResponse
     */
    public function resetExcludedSearchTerm(Context $context)
    {

    }
}

?>
-----
<?php

namespace Rector\Core\Tests\Issues\PartialValueDocblockUpdate\Fixture;

use Shopware\Core\Framework\Context;
use Shopware\Core\Framework\Routing\Annotation\Since;
use Symfony\Component\HttpFoundation\JsonResponse;
use Symfony\Component\Routing\Annotation\Route;

class AddDefaultValueToRoute2 {
    /**
     * @required
     * @Route("/api/_admin/reset-excluded-search-term", name="api.admin.reset-excluded-search-term", methods={"POST"}, defaults={})
     *
     * @return JsonResponse
     */
    public function resetExcludedSearchTerm(Context $context)
    {

    }
}

?>
