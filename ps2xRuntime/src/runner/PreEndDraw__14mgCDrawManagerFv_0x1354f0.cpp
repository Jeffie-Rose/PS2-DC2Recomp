#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreEndDraw__14mgCDrawManagerFv
// Address: 0x1354f0 - 0x13565c
void PreEndDraw__14mgCDrawManagerFv_0x1354f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreEndDraw__14mgCDrawManagerFv_0x1354f0");
#endif

    switch (ctx->pc) {
        case 0x135530u: goto label_135530;
        case 0x135544u: goto label_135544;
        case 0x135578u: goto label_135578;
        case 0x1355c4u: goto label_1355c4;
        case 0x1355e4u: goto label_1355e4;
        default: break;
    }

    ctx->pc = 0x1354f0u;

    // 0x1354f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1354f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1354f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1354f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1354f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1354f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1354fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1354fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135508: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x135508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13550c: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13550cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x135510: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135510u;
    {
        const bool branch_taken_0x135510 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x135510) {
            ctx->pc = 0x135520u;
            goto label_135520;
        }
    }
    ctx->pc = 0x135518u;
    // 0x135518: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x135518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13551c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13551cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_135520:
    // 0x135520: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x135520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135524: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135528: 0xc04e748  jal         func_139D20
    ctx->pc = 0x135528u;
    SET_GPR_U32(ctx, 31, 0x135530u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135530u; }
        if (ctx->pc != 0x135530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135530u; }
        if (ctx->pc != 0x135530u) { return; }
    }
    ctx->pc = 0x135530u;
label_135530:
    // 0x135530: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x135530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    // 0x135534: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x135534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x135538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x135538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13553c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13553Cu;
    {
        const bool branch_taken_0x13553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13553c) {
            ctx->pc = 0x1355A4u;
            goto label_1355a4;
        }
    }
    ctx->pc = 0x135544u;
label_135544:
    // 0x135544: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x135544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135548: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x135548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13554c: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13554Cu;
    {
        const bool branch_taken_0x13554c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13554c) {
            ctx->pc = 0x1355A0u;
            goto label_1355a0;
        }
    }
    ctx->pc = 0x135554u;
    // 0x135554: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x135554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x135558: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135558u;
    {
        const bool branch_taken_0x135558 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x135558) {
            ctx->pc = 0x135568u;
            goto label_135568;
        }
    }
    ctx->pc = 0x135560u;
    // 0x135560: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x135560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x135564: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x135564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_135568:
    // 0x135568: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x135568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13556c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x13556cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135570: 0xc04e748  jal         func_139D20
    ctx->pc = 0x135570u;
    SET_GPR_U32(ctx, 31, 0x135578u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135578u; }
        if (ctx->pc != 0x135578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135578u; }
        if (ctx->pc != 0x135578u) { return; }
    }
    ctx->pc = 0x135578u;
label_135578:
    // 0x135578: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x135578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13557c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x135580: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x135580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x135584: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x135584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x135588: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x135588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13558c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x135590: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x135590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135594: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x135594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x135598: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x135598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13559c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13559cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1355a0:
    // 0x1355a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1355a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1355a4:
    // 0x1355a4: 0x0  nop
    ctx->pc = 0x1355a4u;
    // NOP
    // 0x1355a8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1355a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1355ac: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1355acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1355b0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1355B0u;
    {
        const bool branch_taken_0x1355b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1355b0) {
            ctx->pc = 0x135544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135544;
        }
    }
    ctx->pc = 0x1355B8u;
    // 0x1355b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1355b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1355BCu;
    {
        const bool branch_taken_0x1355bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355bc) {
            ctx->pc = 0x135634u;
            goto label_135634;
        }
    }
    ctx->pc = 0x1355C4u;
label_1355c4:
    // 0x1355c4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1355c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1355c8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1355c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1355cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1355ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1355d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1355d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1355d4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1355D4u;
    {
        const bool branch_taken_0x1355d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355d4) {
            ctx->pc = 0x135630u;
            goto label_135630;
        }
    }
    ctx->pc = 0x1355DCu;
    // 0x1355dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1355DCu;
    {
        const bool branch_taken_0x1355dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355dc) {
            ctx->pc = 0x135624u;
            goto label_135624;
        }
    }
    ctx->pc = 0x1355E4u;
label_1355e4:
    // 0x1355e4: 0x0  nop
    ctx->pc = 0x1355e4u;
    // NOP
    // 0x1355e8: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x1355e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1355ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1355ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1355f0: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x1355f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1355f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1355f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1355fc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1355fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x135600: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x135600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x135604: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135608: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x135608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x13560c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x135610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x135610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135614: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x135614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x135618: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x135618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13561c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x13561cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x135620: 0x0  nop
    ctx->pc = 0x135620u;
    // NOP
label_135624:
    // 0x135624: 0x0  nop
    ctx->pc = 0x135624u;
    // NOP
    // 0x135628: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x135628u;
    {
        const bool branch_taken_0x135628 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x135628) {
            ctx->pc = 0x1355E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1355e4;
        }
    }
    ctx->pc = 0x135630u;
label_135630:
    // 0x135630: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_135634:
    // 0x135634: 0x0  nop
    ctx->pc = 0x135634u;
    // NOP
    // 0x135638: 0x18a0ffe2  blez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x135638u;
    {
        const bool branch_taken_0x135638 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x135638) {
            ctx->pc = 0x1355C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1355c4;
        }
    }
    ctx->pc = 0x135640u;
    // 0x135640: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13564c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13564cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135650: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135654: 0x3e00008  jr          $ra
    ctx->pc = 0x135654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13565Cu;
}
