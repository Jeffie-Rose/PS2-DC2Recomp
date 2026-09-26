#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12mgCVisualMDTFPUiPA4_fP14mgCDrawManager
// Address: 0x13f4e0 - 0x13f69c
void Draw__12mgCVisualMDTFPUiPA4_fP14mgCDrawManager_0x13f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12mgCVisualMDTFPUiPA4_fP14mgCDrawManager_0x13f4e0");
#endif

    switch (ctx->pc) {
        case 0x13f4e0u: goto label_13f4e0;
        case 0x13f4e4u: goto label_13f4e4;
        case 0x13f4e8u: goto label_13f4e8;
        case 0x13f4ecu: goto label_13f4ec;
        case 0x13f4f0u: goto label_13f4f0;
        case 0x13f4f4u: goto label_13f4f4;
        case 0x13f4f8u: goto label_13f4f8;
        case 0x13f4fcu: goto label_13f4fc;
        case 0x13f500u: goto label_13f500;
        case 0x13f504u: goto label_13f504;
        case 0x13f508u: goto label_13f508;
        case 0x13f50cu: goto label_13f50c;
        case 0x13f510u: goto label_13f510;
        case 0x13f514u: goto label_13f514;
        case 0x13f518u: goto label_13f518;
        case 0x13f51cu: goto label_13f51c;
        case 0x13f520u: goto label_13f520;
        case 0x13f524u: goto label_13f524;
        case 0x13f528u: goto label_13f528;
        case 0x13f52cu: goto label_13f52c;
        case 0x13f530u: goto label_13f530;
        case 0x13f534u: goto label_13f534;
        case 0x13f538u: goto label_13f538;
        case 0x13f53cu: goto label_13f53c;
        case 0x13f540u: goto label_13f540;
        case 0x13f544u: goto label_13f544;
        case 0x13f548u: goto label_13f548;
        case 0x13f54cu: goto label_13f54c;
        case 0x13f550u: goto label_13f550;
        case 0x13f554u: goto label_13f554;
        case 0x13f558u: goto label_13f558;
        case 0x13f55cu: goto label_13f55c;
        case 0x13f560u: goto label_13f560;
        case 0x13f564u: goto label_13f564;
        case 0x13f568u: goto label_13f568;
        case 0x13f56cu: goto label_13f56c;
        case 0x13f570u: goto label_13f570;
        case 0x13f574u: goto label_13f574;
        case 0x13f578u: goto label_13f578;
        case 0x13f57cu: goto label_13f57c;
        case 0x13f580u: goto label_13f580;
        case 0x13f584u: goto label_13f584;
        case 0x13f588u: goto label_13f588;
        case 0x13f58cu: goto label_13f58c;
        case 0x13f590u: goto label_13f590;
        case 0x13f594u: goto label_13f594;
        case 0x13f598u: goto label_13f598;
        case 0x13f59cu: goto label_13f59c;
        case 0x13f5a0u: goto label_13f5a0;
        case 0x13f5a4u: goto label_13f5a4;
        case 0x13f5a8u: goto label_13f5a8;
        case 0x13f5acu: goto label_13f5ac;
        case 0x13f5b0u: goto label_13f5b0;
        case 0x13f5b4u: goto label_13f5b4;
        case 0x13f5b8u: goto label_13f5b8;
        case 0x13f5bcu: goto label_13f5bc;
        case 0x13f5c0u: goto label_13f5c0;
        case 0x13f5c4u: goto label_13f5c4;
        case 0x13f5c8u: goto label_13f5c8;
        case 0x13f5ccu: goto label_13f5cc;
        case 0x13f5d0u: goto label_13f5d0;
        case 0x13f5d4u: goto label_13f5d4;
        case 0x13f5d8u: goto label_13f5d8;
        case 0x13f5dcu: goto label_13f5dc;
        case 0x13f5e0u: goto label_13f5e0;
        case 0x13f5e4u: goto label_13f5e4;
        case 0x13f5e8u: goto label_13f5e8;
        case 0x13f5ecu: goto label_13f5ec;
        case 0x13f5f0u: goto label_13f5f0;
        case 0x13f5f4u: goto label_13f5f4;
        case 0x13f5f8u: goto label_13f5f8;
        case 0x13f5fcu: goto label_13f5fc;
        case 0x13f600u: goto label_13f600;
        case 0x13f604u: goto label_13f604;
        case 0x13f608u: goto label_13f608;
        case 0x13f60cu: goto label_13f60c;
        case 0x13f610u: goto label_13f610;
        case 0x13f614u: goto label_13f614;
        case 0x13f618u: goto label_13f618;
        case 0x13f61cu: goto label_13f61c;
        case 0x13f620u: goto label_13f620;
        case 0x13f624u: goto label_13f624;
        case 0x13f628u: goto label_13f628;
        case 0x13f62cu: goto label_13f62c;
        case 0x13f630u: goto label_13f630;
        case 0x13f634u: goto label_13f634;
        case 0x13f638u: goto label_13f638;
        case 0x13f63cu: goto label_13f63c;
        case 0x13f640u: goto label_13f640;
        case 0x13f644u: goto label_13f644;
        case 0x13f648u: goto label_13f648;
        case 0x13f64cu: goto label_13f64c;
        case 0x13f650u: goto label_13f650;
        case 0x13f654u: goto label_13f654;
        case 0x13f658u: goto label_13f658;
        case 0x13f65cu: goto label_13f65c;
        case 0x13f660u: goto label_13f660;
        case 0x13f664u: goto label_13f664;
        case 0x13f668u: goto label_13f668;
        case 0x13f66cu: goto label_13f66c;
        case 0x13f670u: goto label_13f670;
        case 0x13f674u: goto label_13f674;
        case 0x13f678u: goto label_13f678;
        case 0x13f67cu: goto label_13f67c;
        case 0x13f680u: goto label_13f680;
        case 0x13f684u: goto label_13f684;
        case 0x13f688u: goto label_13f688;
        case 0x13f68cu: goto label_13f68c;
        case 0x13f690u: goto label_13f690;
        case 0x13f694u: goto label_13f694;
        case 0x13f698u: goto label_13f698;
        default: break;
    }

    ctx->pc = 0x13f4e0u;

label_13f4e0:
    // 0x13f4e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13f4e4:
    // 0x13f4e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_13f4e8:
    // 0x13f4e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13f4ec:
    // 0x13f4ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13f4f0:
    // 0x13f4f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13f4f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f4f4:
    // 0x13f4f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13f4f8:
    // 0x13f4f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13f4f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13f4fc:
    // 0x13f4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f500:
    // 0x13f500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f504:
    // 0x13f504: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_13f508:
    if (ctx->pc == 0x13F508u) {
        ctx->pc = 0x13F508u;
            // 0x13f508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F50Cu;
        goto label_13f50c;
    }
    ctx->pc = 0x13F504u;
    {
        const bool branch_taken_0x13f504 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F504u;
            // 0x13f508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f504) {
            ctx->pc = 0x13F514u;
            goto label_13f514;
        }
    }
    ctx->pc = 0x13F50Cu;
label_13f50c:
    // 0x13f50c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x13f50cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_13f510:
    // 0x13f510: 0x267320e0  addiu       $s3, $s3, 0x20E0
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8416));
label_13f514:
    // 0x13f514: 0x8e670064  lw          $a3, 0x64($s3)
    ctx->pc = 0x13f514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_13f518:
    // 0x13f518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f51c:
    // 0x13f51c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_13f520:
    // 0x13f520: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13f520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_13f524:
    // 0x13f524: 0xaf808758  sw          $zero, -0x78A8($gp)
    ctx->pc = 0x13f524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
label_13f528:
    // 0x13f528: 0x8e710060  lw          $s1, 0x60($s3)
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_13f52c:
    // 0x13f52c: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x13f52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13f530:
    // 0x13f530: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x13f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_13f534:
    // 0x13f534: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x13f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13f538:
    // 0x13f538: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13f538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13f53c:
    // 0x13f53c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_13f540:
    // 0x13f540: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x13f540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f544:
    // 0x13f544: 0x320f809  jalr        $t9
label_13f548:
    if (ctx->pc == 0x13F548u) {
        ctx->pc = 0x13F548u;
            // 0x13f548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F54Cu;
        goto label_13f54c;
    }
    ctx->pc = 0x13F544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F54Cu);
        ctx->pc = 0x13F548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F544u;
            // 0x13f548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F54Cu; }
            if (ctx->pc != 0x13F54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13F54Cu;
label_13f54c:
    // 0x13f54c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_13f550:
    // 0x13f550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f554:
    // 0x13f554: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13f558:
    // 0x13f558: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x13f558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_13f55c:
    // 0x13f55c: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x13f55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13f560:
    // 0x13f560: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_13f564:
    // 0x13f564: 0x320f809  jalr        $t9
label_13f568:
    if (ctx->pc == 0x13F568u) {
        ctx->pc = 0x13F568u;
            // 0x13f568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F56Cu;
        goto label_13f56c;
    }
    ctx->pc = 0x13F564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F56Cu);
        ctx->pc = 0x13F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F564u;
            // 0x13f568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F56Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F56Cu; }
            if (ctx->pc != 0x13F56Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13F56Cu;
label_13f56c:
    // 0x13f56c: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_13f570:
    if (ctx->pc == 0x13F570u) {
        ctx->pc = 0x13F574u;
        goto label_13f574;
    }
    ctx->pc = 0x13F56Cu;
    {
        const bool branch_taken_0x13f56c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f56c) {
            ctx->pc = 0x13F5FCu;
            goto label_13f5fc;
        }
    }
    ctx->pc = 0x13F574u;
label_13f574:
    // 0x13f574: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_13f578:
    // 0x13f578: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x13f578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_13f57c:
    // 0x13f57c: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x13f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_13f580:
    // 0x13f580: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x13f580u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_13f584:
    // 0x13f584: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x13f584u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_13f588:
    // 0x13f588: 0x8e100048  lw          $s0, 0x48($s0)
    ctx->pc = 0x13f588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_13f58c:
    // 0x13f58c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_13f590:
    if (ctx->pc == 0x13F590u) {
        ctx->pc = 0x13F590u;
            // 0x13f590: 0x26910010  addiu       $s1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x13F594u;
        goto label_13f594;
    }
    ctx->pc = 0x13F58Cu;
    {
        const bool branch_taken_0x13f58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F58Cu;
            // 0x13f590: 0x26910010  addiu       $s1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f58c) {
            ctx->pc = 0x13F5CCu;
            goto label_13f5cc;
        }
    }
    ctx->pc = 0x13F594u;
label_13f594:
    // 0x13f594: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13f598:
    // 0x13f598: 0xc0517a0  jal         func_145E80
label_13f59c:
    if (ctx->pc == 0x13F59Cu) {
        ctx->pc = 0x13F59Cu;
            // 0x13f59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F5A0u;
        goto label_13f5a0;
    }
    ctx->pc = 0x13F598u;
    SET_GPR_U32(ctx, 31, 0x13F5A0u);
    ctx->pc = 0x13F59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F598u;
            // 0x13f59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145E80u;
    if (runtime->hasFunction(0x145E80u)) {
        auto targetFn = runtime->lookupFunction(0x145E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F5A0u; }
        if (ctx->pc != 0x13F5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSendVuProg__FPUii_0x145e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F5A0u; }
        if (ctx->pc != 0x13F5A0u) { return; }
    }
    ctx->pc = 0x13F5A0u;
label_13f5a0:
    // 0x13f5a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f5a4:
    // 0x13f5a4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_13f5a8:
    // 0x13f5a8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_13f5ac:
    // 0x13f5ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_13f5b0:
    // 0x13f5b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13f5b4:
    // 0x13f5b4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_13f5b8:
    // 0x13f5b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x13f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_13f5bc:
    // 0x13f5bc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x13f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_13f5c0:
    // 0x13f5c0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13f5c4:
    // 0x13f5c4: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_13f5c8:
    if (ctx->pc == 0x13F5C8u) {
        ctx->pc = 0x13F5C8u;
            // 0x13f5c8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x13F5CCu;
        goto label_13f5cc;
    }
    ctx->pc = 0x13F5C4u;
    {
        const bool branch_taken_0x13f5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5C4u;
            // 0x13f5c8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5c4) {
            ctx->pc = 0x13F594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f594;
        }
    }
    ctx->pc = 0x13F5CCu;
label_13f5cc:
    // 0x13f5cc: 0x0  nop
    ctx->pc = 0x13f5ccu;
    // NOP
label_13f5d0:
    // 0x13f5d0: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_13f5d4:
    // 0x13f5d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_13f5d8:
    if (ctx->pc == 0x13F5D8u) {
        ctx->pc = 0x13F5D8u;
            // 0x13f5d8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x13F5DCu;
        goto label_13f5dc;
    }
    ctx->pc = 0x13F5D4u;
    {
        const bool branch_taken_0x13f5d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5D4u;
            // 0x13f5d8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5d4) {
            ctx->pc = 0x13F5E4u;
            goto label_13f5e4;
        }
    }
    ctx->pc = 0x13F5DCu;
label_13f5dc:
    // 0x13f5dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_13f5e0:
    // 0x13f5e0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13f5e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13f5e4:
    // 0x13f5e4: 0x4610025  bgez        $v1, . + 4 + (0x25 << 2)
label_13f5e8:
    if (ctx->pc == 0x13F5E8u) {
        ctx->pc = 0x13F5E8u;
            // 0x13f5e8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x13F5ECu;
        goto label_13f5ec;
    }
    ctx->pc = 0x13F5E4u;
    {
        const bool branch_taken_0x13f5e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5E4u;
            // 0x13f5e8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5e4) {
            ctx->pc = 0x13F67Cu;
            goto label_13f67c;
        }
    }
    ctx->pc = 0x13F5ECu;
label_13f5ec:
    // 0x13f5ec: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_13f5f0:
    // 0x13f5f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13f5f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13f5f4:
    // 0x13f5f4: 0x10000022  b           . + 4 + (0x22 << 2)
label_13f5f8:
    if (ctx->pc == 0x13F5F8u) {
        ctx->pc = 0x13F5F8u;
            // 0x13f5f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x13F5FCu;
        goto label_13f5fc;
    }
    ctx->pc = 0x13F5F4u;
    {
        const bool branch_taken_0x13f5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5F4u;
            // 0x13f5f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5f4) {
            ctx->pc = 0x13F680u;
            goto label_13f680;
        }
    }
    ctx->pc = 0x13F5FCu;
label_13f5fc:
    // 0x13f5fc: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x13f5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_13f600:
    // 0x13f600: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_13f604:
    if (ctx->pc == 0x13F604u) {
        ctx->pc = 0x13F608u;
        goto label_13f608;
    }
    ctx->pc = 0x13F600u;
    {
        const bool branch_taken_0x13f600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f600) {
            ctx->pc = 0x13F674u;
            goto label_13f674;
        }
    }
    ctx->pc = 0x13F608u;
label_13f608:
    // 0x13f608: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f60c:
    // 0x13f60c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x13f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_13f610:
    // 0x13f610: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x13f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_13f614:
    // 0x13f614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_13f618:
    // 0x13f618: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_13f61c:
    // 0x13f61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f620:
    // 0x13f620: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_13f624:
    // 0x13f624: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13f628:
    if (ctx->pc == 0x13F628u) {
        ctx->pc = 0x13F62Cu;
        goto label_13f62c;
    }
    ctx->pc = 0x13F624u;
    {
        const bool branch_taken_0x13f624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f624) {
            ctx->pc = 0x13F64Cu;
            goto label_13f64c;
        }
    }
    ctx->pc = 0x13F62Cu;
label_13f62c:
    // 0x13f62c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x13f62cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13f630:
    // 0x13f630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f634:
    // 0x13f634: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13f638:
    // 0x13f638: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x13f638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13f63c:
    // 0x13f63c: 0xc04d674  jal         func_1359D0
label_13f640:
    if (ctx->pc == 0x13F640u) {
        ctx->pc = 0x13F640u;
            // 0x13f640: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F644u;
        goto label_13f644;
    }
    ctx->pc = 0x13F63Cu;
    SET_GPR_U32(ctx, 31, 0x13F644u);
    ctx->pc = 0x13F640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F63Cu;
            // 0x13f640: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1359D0u;
    if (runtime->hasFunction(0x1359D0u)) {
        auto targetFn = runtime->lookupFunction(0x1359D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F644u; }
        if (ctx->pc != 0x13F644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPacket__14mgCDrawManagerFiP1P1i_0x1359d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F644u; }
        if (ctx->pc != 0x13F644u) { return; }
    }
    ctx->pc = 0x13F644u;
label_13f644:
    // 0x13f644: 0x10000008  b           . + 4 + (0x8 << 2)
label_13f648:
    if (ctx->pc == 0x13F648u) {
        ctx->pc = 0x13F64Cu;
        goto label_13f64c;
    }
    ctx->pc = 0x13F644u;
    {
        const bool branch_taken_0x13f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f644) {
            ctx->pc = 0x13F668u;
            goto label_13f668;
        }
    }
    ctx->pc = 0x13F64Cu;
label_13f64c:
    // 0x13f64c: 0x0  nop
    ctx->pc = 0x13f64cu;
    // NOP
label_13f650:
    // 0x13f650: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x13f650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13f654:
    // 0x13f654: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x13f654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13f658:
    // 0x13f658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f65c:
    // 0x13f65c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13f660:
    // 0x13f660: 0xc04d674  jal         func_1359D0
label_13f664:
    if (ctx->pc == 0x13F664u) {
        ctx->pc = 0x13F664u;
            // 0x13f664: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F668u;
        goto label_13f668;
    }
    ctx->pc = 0x13F660u;
    SET_GPR_U32(ctx, 31, 0x13F668u);
    ctx->pc = 0x13F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F660u;
            // 0x13f664: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1359D0u;
    if (runtime->hasFunction(0x1359D0u)) {
        auto targetFn = runtime->lookupFunction(0x1359D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F668u; }
        if (ctx->pc != 0x13F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPacket__14mgCDrawManagerFiP1P1i_0x1359d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F668u; }
        if (ctx->pc != 0x13F668u) { return; }
    }
    ctx->pc = 0x13F668u;
label_13f668:
    // 0x13f668: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x13f668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_13f66c:
    // 0x13f66c: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
label_13f670:
    if (ctx->pc == 0x13F670u) {
        ctx->pc = 0x13F674u;
        goto label_13f674;
    }
    ctx->pc = 0x13F66Cu;
    {
        const bool branch_taken_0x13f66c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f66c) {
            ctx->pc = 0x13F608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f608;
        }
    }
    ctx->pc = 0x13F674u;
label_13f674:
    // 0x13f674: 0x0  nop
    ctx->pc = 0x13f674u;
    // NOP
label_13f678:
    // 0x13f678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f67c:
    // 0x13f67c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13f67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13f680:
    // 0x13f680: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13f680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13f684:
    // 0x13f684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f688:
    // 0x13f688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f68c:
    // 0x13f68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f690:
    // 0x13f690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f694:
    // 0x13f694: 0x3e00008  jr          $ra
label_13f698:
    if (ctx->pc == 0x13F698u) {
        ctx->pc = 0x13F698u;
            // 0x13f698: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x13F69Cu;
        goto label_fallthrough_0x13f694;
    }
    ctx->pc = 0x13F694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F694u;
            // 0x13f698: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13f694:
    ctx->pc = 0x13F69Cu;
}
