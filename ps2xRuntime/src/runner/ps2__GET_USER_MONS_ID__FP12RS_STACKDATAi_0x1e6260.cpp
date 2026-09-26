#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_USER_MONS_ID__FP12RS_STACKDATAi
// Address: 0x1e6260 - 0x1e62e0
void ps2__GET_USER_MONS_ID__FP12RS_STACKDATAi_0x1e6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_USER_MONS_ID__FP12RS_STACKDATAi_0x1e6260");
#endif

    switch (ctx->pc) {
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62ccu: goto label_1e62cc;
        default: break;
    }

    ctx->pc = 0x1e6260u;

    // 0x1e6260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e626c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6270: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6270u;
    {
        const bool branch_taken_0x1e6270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6270u;
            // 0x1e6274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6270) {
            ctx->pc = 0x1E6280u;
            goto label_1e6280;
        }
    }
    ctx->pc = 0x1E6278u;
    // 0x1e6278: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E6278u;
    {
        const bool branch_taken_0x1e6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6278u;
            // 0x1e627c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6278) {
            ctx->pc = 0x1E62D0u;
            goto label_1e62d0;
        }
    }
    ctx->pc = 0x1E6280u;
label_1e6280:
    // 0x1e6280: 0x8f838da0  lw          $v1, -0x7260($gp)
    ctx->pc = 0x1e6280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1e6284: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1e6284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1e6288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e6288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e628c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6290: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x1e6294: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E6294u;
    {
        const bool branch_taken_0x1e6294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6294u;
            // 0x1e6298: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6294) {
            ctx->pc = 0x1E62C0u;
            goto label_1e62c0;
        }
    }
    ctx->pc = 0x1E629Cu;
    // 0x1e629c: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E629Cu;
    SET_GPR_U32(ctx, 31, 0x1E62A4u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62A4u; }
        if (ctx->pc != 0x1E62A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62A4u; }
        if (ctx->pc != 0x1E62A4u) { return; }
    }
    ctx->pc = 0x1E62A4u;
label_1e62a4:
    // 0x1e62a4: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x1e62a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e62a8: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e62ac: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1e62acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x1e62b0: 0x80420054  lb          $v0, 0x54($v0)
    ctx->pc = 0x1e62b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1e62b4: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E62B4u;
    {
        const bool branch_taken_0x1e62b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E62B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62B4u;
            // 0x1e62b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62b4) {
            ctx->pc = 0x1E62C4u;
            goto label_1e62c4;
        }
    }
    ctx->pc = 0x1E62BCu;
    // 0x1e62bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e62c0:
    // 0x1e62c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e62c4:
    // 0x1e62c4: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E62C4u;
    SET_GPR_U32(ctx, 31, 0x1E62CCu);
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62CCu; }
        if (ctx->pc != 0x1E62CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62CCu; }
        if (ctx->pc != 0x1E62CCu) { return; }
    }
    ctx->pc = 0x1E62CCu;
label_1e62cc:
    // 0x1e62cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62d0:
    // 0x1e62d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e62d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e62d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e62d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e62d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E62D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E62DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62D8u;
            // 0x1e62dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E62E0u;
}
