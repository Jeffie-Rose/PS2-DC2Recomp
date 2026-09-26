#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_GET_GIFT__FP12RS_STACKDATAi
// Address: 0x2e8520 - 0x2e85c8
void ps2__COLPRIM_GET_GIFT__FP12RS_STACKDATAi_0x2e8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_GET_GIFT__FP12RS_STACKDATAi_0x2e8520");
#endif

    switch (ctx->pc) {
        case 0x2e8560u: goto label_2e8560;
        case 0x2e8570u: goto label_2e8570;
        case 0x2e857cu: goto label_2e857c;
        case 0x2e85b0u: goto label_2e85b0;
        default: break;
    }

    ctx->pc = 0x2e8520u;

    // 0x2e8520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8524: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8528: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e852c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8530: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8530u;
    {
        const bool branch_taken_0x2e8530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8530u;
            // 0x2e8534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8530) {
            ctx->pc = 0x2E8540u;
            goto label_2e8540;
        }
    }
    ctx->pc = 0x2E8538u;
    // 0x2e8538: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E8538u;
    {
        const bool branch_taken_0x2e8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8538u;
            // 0x2e853c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8538) {
            ctx->pc = 0x2E85B4u;
            goto label_2e85b4;
        }
    }
    ctx->pc = 0x2E8540u;
label_2e8540:
    // 0x2e8540: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8544: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8548u;
    {
        const bool branch_taken_0x2e8548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8548u;
            // 0x2e854c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8548) {
            ctx->pc = 0x2E8558u;
            goto label_2e8558;
        }
    }
    ctx->pc = 0x2E8550u;
    // 0x2e8550: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E8550u;
    {
        const bool branch_taken_0x2e8550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8550u;
            // 0x2e8554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8550) {
            ctx->pc = 0x2E85B4u;
            goto label_2e85b4;
        }
    }
    ctx->pc = 0x2E8558u;
label_2e8558:
    // 0x2e8558: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8558u;
    SET_GPR_U32(ctx, 31, 0x2E8560u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8560u; }
        if (ctx->pc != 0x2E8560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8560u; }
        if (ctx->pc != 0x2E8560u) { return; }
    }
    ctx->pc = 0x2E8560u;
label_2e8560:
    // 0x2e8560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8568: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8568u;
    SET_GPR_U32(ctx, 31, 0x2E8570u);
    ctx->pc = 0x2E856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8568u;
            // 0x2e856c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8570u; }
        if (ctx->pc != 0x2E8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8570u; }
        if (ctx->pc != 0x2E8570u) { return; }
    }
    ctx->pc = 0x2E8570u;
label_2e8570:
    // 0x2e8570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8574: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8574u;
    SET_GPR_U32(ctx, 31, 0x2E857Cu);
    ctx->pc = 0x2E8578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8574u;
            // 0x2e8578: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E857Cu; }
        if (ctx->pc != 0x2E857Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E857Cu; }
        if (ctx->pc != 0x2E857Cu) { return; }
    }
    ctx->pc = 0x2E857Cu;
label_2e857c:
    // 0x2e857c: 0x8f889ed0  lw          $t0, -0x6130($gp)
    ctx->pc = 0x2e857cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8580: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e8580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e8584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8588: 0x248413d0  addiu       $a0, $a0, 0x13D0
    ctx->pc = 0x2e8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5072));
    // 0x2e858c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e8590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8594: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e8594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8598: 0x8d080134  lw          $t0, 0x134($t0)
    ctx->pc = 0x2e8598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 308)));
    // 0x2e859c: 0xa51000e0  sh          $s0, 0xE0($t0)
    ctx->pc = 0x2e859cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 224), (uint16_t)GPR_U32(ctx, 16));
    // 0x2e85a0: 0xa51100e2  sh          $s1, 0xE2($t0)
    ctx->pc = 0x2e85a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 226), (uint16_t)GPR_U32(ctx, 17));
    // 0x2e85a4: 0xa50200e4  sh          $v0, 0xE4($t0)
    ctx->pc = 0x2e85a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 228), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e85a8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E85A8u;
    SET_GPR_U32(ctx, 31, 0x2E85B0u);
    ctx->pc = 0x2E85ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85A8u;
            // 0x2e85ac: 0xa10300e6  sb          $v1, 0xE6($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 230), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85B0u; }
        if (ctx->pc != 0x2E85B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85B0u; }
        if (ctx->pc != 0x2E85B0u) { return; }
    }
    ctx->pc = 0x2E85B0u;
label_2e85b0:
    // 0x2e85b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e85b4:
    // 0x2e85b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e85b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e85b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e85b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e85bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e85bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e85c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E85C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E85C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85C0u;
            // 0x2e85c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E85C8u;
}
