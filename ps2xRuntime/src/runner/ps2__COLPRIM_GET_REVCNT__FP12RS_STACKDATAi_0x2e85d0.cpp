#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_GET_REVCNT__FP12RS_STACKDATAi
// Address: 0x2e85d0 - 0x2e8684
void ps2__COLPRIM_GET_REVCNT__FP12RS_STACKDATAi_0x2e85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_GET_REVCNT__FP12RS_STACKDATAi_0x2e85d0");
#endif

    switch (ctx->pc) {
        case 0x2e8624u: goto label_2e8624;
        case 0x2e8648u: goto label_2e8648;
        case 0x2e8660u: goto label_2e8660;
        case 0x2e8674u: goto label_2e8674;
        default: break;
    }

    ctx->pc = 0x2e85d0u;

    // 0x2e85d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e85d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e85d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e85dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e85dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e85e0: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E85E0u;
    {
        const bool branch_taken_0x2e85e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E85E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85E0u;
            // 0x2e85e4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85e0) {
            ctx->pc = 0x2E85FCu;
            goto label_2e85fc;
        }
    }
    ctx->pc = 0x2E85E8u;
    // 0x2e85e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e85ec: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E85ECu;
    {
        const bool branch_taken_0x2e85ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E85F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85ECu;
            // 0x2e85f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85ec) {
            ctx->pc = 0x2E85FCu;
            goto label_2e85fc;
        }
    }
    ctx->pc = 0x2E85F4u;
    // 0x2e85f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E85F4u;
    {
        const bool branch_taken_0x2e85f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85F4u;
            // 0x2e85f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85f4) {
            ctx->pc = 0x2E867Cu;
            goto label_2e867c;
        }
    }
    ctx->pc = 0x2E85FCu;
label_2e85fc:
    // 0x2e85fc: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8600: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8604u;
    {
        const bool branch_taken_0x2e8604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8604) {
            ctx->pc = 0x2E8614u;
            goto label_2e8614;
        }
    }
    ctx->pc = 0x2E860Cu;
    // 0x2e860c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E860Cu;
    {
        const bool branch_taken_0x2e860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E860Cu;
            // 0x2e8610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e860c) {
            ctx->pc = 0x2E8678u;
            goto label_2e8678;
        }
    }
    ctx->pc = 0x2E8614u;
label_2e8614:
    // 0x2e8614: 0x804500c0  lb          $a1, 0xC0($v0)
    ctx->pc = 0x2e8614u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2e8618: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e8618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e861c: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E861Cu;
    SET_GPR_U32(ctx, 31, 0x2E8624u);
    ctx->pc = 0x2E8620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E861Cu;
            // 0x2e8620: 0x24880008  addiu       $t0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8624u; }
        if (ctx->pc != 0x2E8624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8624u; }
        if (ctx->pc != 0x2E8624u) { return; }
    }
    ctx->pc = 0x2E8624u;
label_2e8624:
    // 0x2e8624: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e8624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8628: 0x14e20013  bne         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E8628u;
    {
        const bool branch_taken_0x2e8628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8628u;
            // 0x2e862c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8628) {
            ctx->pc = 0x2E8678u;
            goto label_2e8678;
        }
    }
    ctx->pc = 0x2E8630u;
    // 0x2e8630: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8634: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e8634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8638: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e863c: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x2e863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8640: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8640u;
    SET_GPR_U32(ctx, 31, 0x2E8648u);
    ctx->pc = 0x2E8644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8640u;
            // 0x2e8644: 0x24880008  addiu       $t0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8648u; }
        if (ctx->pc != 0x2E8648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8648u; }
        if (ctx->pc != 0x2E8648u) { return; }
    }
    ctx->pc = 0x2E8648u;
label_2e8648:
    // 0x2e8648: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e864c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8650: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8654: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2e8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8658: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8658u;
    SET_GPR_U32(ctx, 31, 0x2E8660u);
    ctx->pc = 0x2E865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8658u;
            // 0x2e865c: 0x24880008  addiu       $t0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8660u; }
        if (ctx->pc != 0x2E8660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8660u; }
        if (ctx->pc != 0x2E8660u) { return; }
    }
    ctx->pc = 0x2E8660u;
label_2e8660:
    // 0x2e8660: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8664: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8668: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x2e8668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e866c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E866Cu;
    SET_GPR_U32(ctx, 31, 0x2E8674u);
    ctx->pc = 0x2E8670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E866Cu;
            // 0x2e8670: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8674u; }
        if (ctx->pc != 0x2E8674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8674u; }
        if (ctx->pc != 0x2E8674u) { return; }
    }
    ctx->pc = 0x2E8674u;
label_2e8674:
    // 0x2e8674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8678:
    // 0x2e8678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e867c:
    // 0x2e867c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E867Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E867Cu;
            // 0x2e8680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8684u;
}
