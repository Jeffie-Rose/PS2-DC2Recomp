#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _isOutSizeOK
// Address: 0x10bf18 - 0x10bfb8
void _isOutSizeOK_0x10bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isOutSizeOK_0x10bf18");
#endif

    switch (ctx->pc) {
        case 0x10bf94u: goto label_10bf94;
        case 0x10bfa0u: goto label_10bfa0;
        default: break;
    }

    ctx->pc = 0x10bf18u;

    // 0x10bf18: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x10bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x10bf1c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10bf20: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x10bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x10bf24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf28: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10bf2c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x10bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x10bf30: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10BF30u;
    {
        const bool branch_taken_0x10bf30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF30u;
            // 0x10bf34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf30) {
            ctx->pc = 0x10BF5Cu;
            goto label_10bf5c;
        }
    }
    ctx->pc = 0x10BF38u;
    // 0x10bf38: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x10bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x10bf3c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10bf40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10bf40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10bf44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10BF44u;
    {
        const bool branch_taken_0x10bf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF44u;
            // 0x10bf48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf44) {
            ctx->pc = 0x10BF74u;
            goto label_10bf74;
        }
    }
    ctx->pc = 0x10BF4Cu;
    // 0x10bf4c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x10bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10bf50: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10bf50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10bf54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10BF54u;
    {
        const bool branch_taken_0x10bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF54u;
            // 0x10bf58: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf54) {
            ctx->pc = 0x10BF74u;
            goto label_10bf74;
        }
    }
    ctx->pc = 0x10BF5Cu;
label_10bf5c:
    // 0x10bf5c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x10bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10bf60: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x10bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10bf64: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x10bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x10bf68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10bf68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10bf6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10bf6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10bf70: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x10bf70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10bf74:
    // 0x10bf74: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x10BF74u;
    {
        const bool branch_taken_0x10bf74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF74u;
            // 0x10bf78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf74) {
            ctx->pc = 0x10BFA4u;
            goto label_10bfa4;
        }
    }
    ctx->pc = 0x10BF7Cu;
    // 0x10bf7c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x10bf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10bf80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10bf84: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x10bf84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10bf88: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x10bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x10bf8c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x10BF8Cu;
    SET_GPR_U32(ctx, 31, 0x10BF94u);
    ctx->pc = 0x10BF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF8Cu;
            // 0x10bf90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF94u; }
        if (ctx->pc != 0x10BF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF94u; }
        if (ctx->pc != 0x10BF94u) { return; }
    }
    ctx->pc = 0x10BF94u;
label_10bf94:
    // 0x10bf94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf98: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10BF98u;
    SET_GPR_U32(ctx, 31, 0x10BFA0u);
    ctx->pc = 0x10BF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF98u;
            // 0x10bf9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFA0u; }
        if (ctx->pc != 0x10BFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFA0u; }
        if (ctx->pc != 0x10BFA0u) { return; }
    }
    ctx->pc = 0x10BFA0u;
label_10bfa0:
    // 0x10bfa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10bfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bfa4:
    // 0x10bfa4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x10bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10bfa8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10bfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10bfac: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10bfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10bfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BFB0u;
            // 0x10bfb4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BFB8u;
}
