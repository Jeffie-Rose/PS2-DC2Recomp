#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceRiver__8CEditMapFPf
// Address: 0x2967b0 - 0x296840
void PlaceRiver__8CEditMapFPf_0x2967b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceRiver__8CEditMapFPf_0x2967b0");
#endif

    switch (ctx->pc) {
        case 0x2967dcu: goto label_2967dc;
        case 0x2967f4u: goto label_2967f4;
        default: break;
    }

    ctx->pc = 0x2967b0u;

    // 0x2967b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2967b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2967b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2967b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2967b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2967b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2967bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2967bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2967c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2967c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2967c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2967c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2967c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2967ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2967d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2967d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2967D4u;
    {
        const bool branch_taken_0x2967d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967D4u;
            // 0x2967d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967d4) {
            ctx->pc = 0x29680Cu;
            goto label_29680c;
        }
    }
    ctx->pc = 0x2967DCu;
label_2967dc:
    // 0x2967dc: 0x8c440f54  lw          $a0, 0xF54($v0)
    ctx->pc = 0x2967dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x2967e0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2967E0u;
    {
        const bool branch_taken_0x2967e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967e0) {
            ctx->pc = 0x296804u;
            goto label_296804;
        }
    }
    ctx->pc = 0x2967E8u;
    // 0x2967e8: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x2967e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2967ec: 0xc0a5ea8  jal         func_297AA0
    ctx->pc = 0x2967ECu;
    SET_GPR_U32(ctx, 31, 0x2967F4u);
    ctx->pc = 0x2967F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2967ECu;
            // 0x2967f0: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x297AA0u;
    if (runtime->hasFunction(0x297AA0u)) {
        auto targetFn = runtime->lookupFunction(0x297AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967F4u; }
        if (ctx->pc != 0x2967F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRiver__9CEditGridFff_0x297aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967F4u; }
        if (ctx->pc != 0x2967F4u) { return; }
    }
    ctx->pc = 0x2967F4u;
label_2967f4:
    // 0x2967f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2967F4u;
    {
        const bool branch_taken_0x2967f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967F4u;
            // 0x2967f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967f4) {
            ctx->pc = 0x296804u;
            goto label_296804;
        }
    }
    ctx->pc = 0x2967FCu;
    // 0x2967fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2967FCu;
    {
        const bool branch_taken_0x2967fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967FCu;
            // 0x296800: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967fc) {
            ctx->pc = 0x296828u;
            goto label_296828;
        }
    }
    ctx->pc = 0x296804u;
label_296804:
    // 0x296804: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x296804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x296808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29680c:
    // 0x29680c: 0x0  nop
    ctx->pc = 0x29680cu;
    // NOP
    // 0x296810: 0x8e620f50  lw          $v0, 0xF50($s3)
    ctx->pc = 0x296810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3920)));
    // 0x296814: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x296814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296818: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x296818u;
    {
        const bool branch_taken_0x296818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296818u;
            // 0x29681c: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296818) {
            ctx->pc = 0x2967DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2967dc;
        }
    }
    ctx->pc = 0x296820u;
    // 0x296820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296824: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x296824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_296828:
    // 0x296828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29682c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29682cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296838: 0x3e00008  jr          $ra
    ctx->pc = 0x296838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296838u;
            // 0x29683c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296840u;
}
