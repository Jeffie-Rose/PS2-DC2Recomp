#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM
// Address: 0x1467b0 - 0x146980
void SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0");
#endif

    switch (ctx->pc) {
        case 0x1467e4u: goto label_1467e4;
        case 0x146834u: goto label_146834;
        case 0x1468b0u: goto label_1468b0;
        case 0x1468dcu: goto label_1468dc;
        case 0x1468fcu: goto label_1468fc;
        case 0x146928u: goto label_146928;
        default: break;
    }

    ctx->pc = 0x1467b0u;

    // 0x1467b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1467b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1467b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1467b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1467b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1467b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1467bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1467bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1467c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1467c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1467c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1467c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1467c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1467cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1467ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1467d0: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1467d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1467d4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1467d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1467d8: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x1467d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1467dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1467DCu;
    {
        const bool branch_taken_0x1467dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1467E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1467DCu;
            // 0x1467e0: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1467dc) {
            ctx->pc = 0x1467F4u;
            goto label_1467f4;
        }
    }
    ctx->pc = 0x1467E4u;
label_1467e4:
    // 0x1467e4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1467e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1467e8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1467e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1467ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1467f0: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x1467f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_1467f4:
    // 0x1467f4: 0x0  nop
    ctx->pc = 0x1467f4u;
    // NOP
    // 0x1467f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1467f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1467fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1467FCu;
    {
        const bool branch_taken_0x1467fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467fc) {
            ctx->pc = 0x146810u;
            goto label_146810;
        }
    }
    ctx->pc = 0x146804u;
    // 0x146804: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x146804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146808: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x146808u;
    {
        const bool branch_taken_0x146808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146808) {
            ctx->pc = 0x1467E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1467e4;
        }
    }
    ctx->pc = 0x146810u;
label_146810:
    // 0x146810: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x146810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
    // 0x146814: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x146818: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x146818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x14681c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x14681Cu;
    {
        const bool branch_taken_0x14681c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x146820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14681Cu;
            // 0x146820: 0x26900040  addiu       $s0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14681c) {
            ctx->pc = 0x146960u;
            goto label_146960;
        }
    }
    ctx->pc = 0x146824u;
    // 0x146824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146828: 0xae900030  sw          $s0, 0x30($s4)
    ctx->pc = 0x146828u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 16));
    // 0x14682c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14682cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146830: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_146834:
    // 0x146834: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146838: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x14683c: 0x28a3005d  slti        $v1, $a1, 0x5D
    ctx->pc = 0x14683cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)93) ? 1 : 0);
    // 0x146840: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x146844: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x146844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x146848: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14684c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x146850: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x146850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x146854: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146858: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x146858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14685c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14685cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x146860: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146864: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x146864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x146868: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x146868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x14686c: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x14686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146870: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x146870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x146874: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x146874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x146878: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14687c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x146880: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x146880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x146884: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146888: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x146888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14688c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x14688cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x146890: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x146890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146894: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x146898: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x146898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x14689c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14689Cu;
    {
        const bool branch_taken_0x14689c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1468A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14689Cu;
            // 0x1468a0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14689c) {
            ctx->pc = 0x146834u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146834;
        }
    }
    ctx->pc = 0x1468A4u;
    // 0x1468a4: 0x28a10065  slti        $at, $a1, 0x65
    ctx->pc = 0x1468a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1468a8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1468A8u;
    {
        const bool branch_taken_0x1468a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468A8u;
            // 0x1468ac: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468a8) {
            ctx->pc = 0x1468D0u;
            goto label_1468d0;
        }
    }
    ctx->pc = 0x1468B0u;
label_1468b0:
    // 0x1468b0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1468b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1468b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1468b8: 0x28a30065  slti        $v1, $a1, 0x65
    ctx->pc = 0x1468b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1468bc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1468bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1468c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1468c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1468c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1468c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1468c8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1468C8u;
    {
        const bool branch_taken_0x1468c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1468c8) {
            ctx->pc = 0x1468B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1468b0;
        }
    }
    ctx->pc = 0x1468D0u;
label_1468d0:
    // 0x1468d0: 0x8e91002c  lw          $s1, 0x2C($s4)
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1468d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1468D4u;
    {
        const bool branch_taken_0x1468d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468D4u;
            // 0x1468d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468d4) {
            ctx->pc = 0x146950u;
            goto label_146950;
        }
    }
    ctx->pc = 0x1468DCu;
label_1468dc:
    // 0x1468dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1468dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1468e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1468e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1468e8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1468e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1468ec: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x1468ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
    // 0x1468f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1468f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1468f4: 0xc0519d8  jal         func_146760
    ctx->pc = 0x1468F4u;
    SET_GPR_U32(ctx, 31, 0x1468FCu);
    ctx->pc = 0x1468F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1468F4u;
            // 0x1468f8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146760u;
    if (runtime->hasFunction(0x146760u)) {
        auto targetFn = runtime->lookupFunction(0x146760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468FCu; }
        if (ctx->pc != 0x1468FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hash__18CScriptInterpreterFPc_0x146760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468FCu; }
        if (ctx->pc != 0x1468FCu) { return; }
    }
    ctx->pc = 0x1468FCu;
label_1468fc:
    // 0x1468fc: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1468fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146900: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146904: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x146904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146908: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x146908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14690c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14690Cu;
    {
        const bool branch_taken_0x14690c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14690c) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x146914u;
    // 0x146914: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146914u;
    {
        const bool branch_taken_0x146914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146914u;
            // 0x146918: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146914) {
            ctx->pc = 0x146948u;
            goto label_146948;
        }
    }
    ctx->pc = 0x14691Cu;
label_14691c:
    // 0x14691c: 0x0  nop
    ctx->pc = 0x14691cu;
    // NOP
    // 0x146920: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x146920u;
    {
        const bool branch_taken_0x146920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146920) {
            ctx->pc = 0x146948u;
            goto label_146948;
        }
    }
    ctx->pc = 0x146928u;
label_146928:
    // 0x146928: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14692c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14692Cu;
    {
        const bool branch_taken_0x14692c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14692c) {
            ctx->pc = 0x14693Cu;
            goto label_14693c;
        }
    }
    ctx->pc = 0x146934u;
    // 0x146934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146934u;
    {
        const bool branch_taken_0x146934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146934u;
            // 0x146938: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146934) {
            ctx->pc = 0x146948u;
            goto label_146948;
        }
    }
    ctx->pc = 0x14693Cu;
label_14693c:
    // 0x14693c: 0x0  nop
    ctx->pc = 0x14693cu;
    // NOP
    // 0x146940: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x146940u;
    {
        const bool branch_taken_0x146940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x146944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146940u;
            // 0x146944: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146940) {
            ctx->pc = 0x146928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146928;
        }
    }
    ctx->pc = 0x146948u;
label_146948:
    // 0x146948: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14694c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x14694cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_146950:
    // 0x146950: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x146950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x146954: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x146954u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x146958: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x146958u;
    {
        const bool branch_taken_0x146958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146958u;
            // 0x14695c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146958) {
            ctx->pc = 0x1468DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1468dc;
        }
    }
    ctx->pc = 0x146960u;
label_146960:
    // 0x146960: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x146960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14696c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14696cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146978: 0x3e00008  jr          $ra
    ctx->pc = 0x146978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146978u;
            // 0x14697c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146980u;
}
