#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: tanf
// Address: 0x11e9f8 - 0x11ea80
void tanf_0x11e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tanf_0x11e9f8");
#endif

    switch (ctx->pc) {
        case 0x11ea54u: goto label_11ea54;
        case 0x11ea74u: goto label_11ea74;
        default: break;
    }

    ctx->pc = 0x11e9f8u;

    // 0x11e9f8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11e9f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e9fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e9fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ea00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea04: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11ea08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11ea0c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x11ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x11ea10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11ea10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11ea14: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x11ea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x11ea18: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11ea18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11ea1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EA1Cu;
    {
        const bool branch_taken_0x11ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA1Cu;
            // 0x11ea20: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea1c) {
            ctx->pc = 0x11EA30u;
            goto label_11ea30;
        }
    }
    ctx->pc = 0x11EA24u;
    // 0x11ea24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11ea24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11ea28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11EA28u;
    {
        const bool branch_taken_0x11ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA28u;
            // 0x11ea2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea28) {
            ctx->pc = 0x11EA6Cu;
            goto label_11ea6c;
        }
    }
    ctx->pc = 0x11EA30u;
label_11ea30:
    // 0x11ea30: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x11ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x11ea34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ea38: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11ea38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11ea3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EA3Cu;
    {
        const bool branch_taken_0x11ea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ea3c) {
            ctx->pc = 0x11EA4Cu;
            goto label_11ea4c;
        }
    }
    ctx->pc = 0x11EA44u;
    // 0x11ea44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11EA44u;
    {
        const bool branch_taken_0x11ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA44u;
            // 0x11ea48: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea44) {
            ctx->pc = 0x11EA74u;
            goto label_11ea74;
        }
    }
    ctx->pc = 0x11EA4Cu;
label_11ea4c:
    // 0x11ea4c: 0xc046cb8  jal         func_11B2E0
    ctx->pc = 0x11EA4Cu;
    SET_GPR_U32(ctx, 31, 0x11EA54u);
    ctx->pc = 0x11EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA4Cu;
            // 0x11ea50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2E0u;
    if (runtime->hasFunction(0x11B2E0u)) {
        auto targetFn = runtime->lookupFunction(0x11B2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA54u; }
        if (ctx->pc != 0x11EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA54u; }
        if (ctx->pc != 0x11EA54u) { return; }
    }
    ctx->pc = 0x11EA54u;
label_11ea54:
    // 0x11ea54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11ea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11ea58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11ea60: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11ea64: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11ea68: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x11ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11ea6c:
    // 0x11ea6c: 0xc0474ce  jal         func_11D338
    ctx->pc = 0x11EA6Cu;
    SET_GPR_U32(ctx, 31, 0x11EA74u);
    ctx->pc = 0x11D338u;
    if (runtime->hasFunction(0x11D338u)) {
        auto targetFn = runtime->lookupFunction(0x11D338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA74u; }
        if (ctx->pc != 0x11EA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_tanf_0x11d338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA74u; }
        if (ctx->pc != 0x11EA74u) { return; }
    }
    ctx->pc = 0x11EA74u;
label_11ea74:
    // 0x11ea74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ea78: 0x3e00008  jr          $ra
    ctx->pc = 0x11EA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA78u;
            // 0x11ea7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11EA80u;
}
