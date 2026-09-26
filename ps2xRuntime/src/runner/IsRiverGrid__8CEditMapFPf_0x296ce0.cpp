#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsRiverGrid__8CEditMapFPf
// Address: 0x296ce0 - 0x296d94
void IsRiverGrid__8CEditMapFPf_0x296ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsRiverGrid__8CEditMapFPf_0x296ce0");
#endif

    switch (ctx->pc) {
        case 0x296d10u: goto label_296d10;
        case 0x296d30u: goto label_296d30;
        case 0x296d48u: goto label_296d48;
        default: break;
    }

    ctx->pc = 0x296ce0u;

    // 0x296ce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x296ce4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x296ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x296ce8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x296ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x296cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x296cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x296cf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x296cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x296cf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x296cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x296cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296d04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x296d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d08: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x296D08u;
    {
        const bool branch_taken_0x296d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D08u;
            // 0x296d0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d08) {
            ctx->pc = 0x296D60u;
            goto label_296d60;
        }
    }
    ctx->pc = 0x296D10u;
label_296d10:
    // 0x296d10: 0x8c540f54  lw          $s4, 0xF54($v0)
    ctx->pc = 0x296d10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x296d14: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x296D14u;
    {
        const bool branch_taken_0x296d14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d14) {
            ctx->pc = 0x296D58u;
            goto label_296d58;
        }
    }
    ctx->pc = 0x296D1Cu;
    // 0x296d1c: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x296d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x296d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d24: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x296d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x296d28: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x296D28u;
    SET_GPR_U32(ctx, 31, 0x296D30u);
    ctx->pc = 0x296D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D28u;
            // 0x296d2c: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D30u; }
        if (ctx->pc != 0x296D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D30u; }
        if (ctx->pc != 0x296D30u) { return; }
    }
    ctx->pc = 0x296D30u;
label_296d30:
    // 0x296d30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296D30u;
    {
        const bool branch_taken_0x296d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d30) {
            ctx->pc = 0x296D58u;
            goto label_296d58;
        }
    }
    ctx->pc = 0x296D38u;
    // 0x296d38: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x296d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x296d3c: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x296d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x296d40: 0xc0a6010  jal         func_298040
    ctx->pc = 0x296D40u;
    SET_GPR_U32(ctx, 31, 0x296D48u);
    ctx->pc = 0x296D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296D40u;
            // 0x296d44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D48u; }
        if (ctx->pc != 0x296D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D48u; }
        if (ctx->pc != 0x296D48u) { return; }
    }
    ctx->pc = 0x296D48u;
label_296d48:
    // 0x296d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296D48u;
    {
        const bool branch_taken_0x296d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D48u;
            // 0x296d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d48) {
            ctx->pc = 0x296D58u;
            goto label_296d58;
        }
    }
    ctx->pc = 0x296D50u;
    // 0x296d50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x296D50u;
    {
        const bool branch_taken_0x296d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D50u;
            // 0x296d54: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d50) {
            ctx->pc = 0x296D78u;
            goto label_296d78;
        }
    }
    ctx->pc = 0x296D58u;
label_296d58:
    // 0x296d58: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x296d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x296d5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296d60:
    // 0x296d60: 0x8e620f50  lw          $v0, 0xF50($s3)
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3920)));
    // 0x296d64: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x296d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296d68: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x296D68u;
    {
        const bool branch_taken_0x296d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D68u;
            // 0x296d6c: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d68) {
            ctx->pc = 0x296D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296d10;
        }
    }
    ctx->pc = 0x296D70u;
    // 0x296d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x296d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_296d78:
    // 0x296d78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296d78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296d7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x296D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D8Cu;
            // 0x296d90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296D94u;
}
