#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMsg__7CDC2MesFv
// Address: 0x21e260 - 0x21e314
void StepMsg__7CDC2MesFv_0x21e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMsg__7CDC2MesFv_0x21e260");
#endif

    switch (ctx->pc) {
        case 0x21e2b8u: goto label_21e2b8;
        case 0x21e2c0u: goto label_21e2c0;
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e304u: goto label_21e304;
        default: break;
    }

    ctx->pc = 0x21e260u;

    // 0x21e260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e26c: 0x8c8321d4  lw          $v1, 0x21D4($a0)
    ctx->pc = 0x21e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8660)));
    // 0x21e270: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x21E270u;
    {
        const bool branch_taken_0x21e270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E270u;
            // 0x21e274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e270) {
            ctx->pc = 0x21E304u;
            goto label_21e304;
        }
    }
    ctx->pc = 0x21E278u;
    // 0x21e278: 0x820221e0  lb          $v0, 0x21E0($s0)
    ctx->pc = 0x21e278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8672)));
    // 0x21e27c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E27Cu;
    {
        const bool branch_taken_0x21e27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E27Cu;
            // 0x21e280: 0x860521e6  lh          $a1, 0x21E6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8678)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e27c) {
            ctx->pc = 0x21E290u;
            goto label_21e290;
        }
    }
    ctx->pc = 0x21E284u;
    // 0x21e284: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e288: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x21e288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x21e28c: 0xa20021e0  sb          $zero, 0x21E0($s0)
    ctx->pc = 0x21e28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8672), (uint8_t)GPR_U32(ctx, 0));
label_21e290:
    // 0x21e290: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x21e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
    // 0x21e294: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E294u;
    {
        const bool branch_taken_0x21e294 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E294u;
            // 0x21e298: 0x820321e1  lb          $v1, 0x21E1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8673)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e294) {
            ctx->pc = 0x21E2A0u;
            goto label_21e2a0;
        }
    }
    ctx->pc = 0x21E29Cu;
    // 0x21e29c: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x21e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_21e2a0:
    // 0x21e2a0: 0xae031ae4  sw          $v1, 0x1AE4($s0)
    ctx->pc = 0x21e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 3));
    // 0x21e2a4: 0x82022200  lb          $v0, 0x2200($s0)
    ctx->pc = 0x21e2a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8704)));
    // 0x21e2a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E2A8u;
    {
        const bool branch_taken_0x21e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2A8u;
            // 0x21e2ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2a8) {
            ctx->pc = 0x21E2C8u;
            goto label_21e2c8;
        }
    }
    ctx->pc = 0x21E2B0u;
    // 0x21e2b0: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x21E2B0u;
    SET_GPR_U32(ctx, 31, 0x21E2B8u);
    ctx->pc = 0x21E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2B0u;
            // 0x21e2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2B8u; }
        if (ctx->pc != 0x21E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2B8u; }
        if (ctx->pc != 0x21E2B8u) { return; }
    }
    ctx->pc = 0x21E2B8u;
label_21e2b8:
    // 0x21e2b8: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x21E2B8u;
    SET_GPR_U32(ctx, 31, 0x21E2C0u);
    ctx->pc = 0x21E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2B8u;
            // 0x21e2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2C0u; }
        if (ctx->pc != 0x21E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2C0u; }
        if (ctx->pc != 0x21E2C0u) { return; }
    }
    ctx->pc = 0x21E2C0u;
label_21e2c0:
    // 0x21e2c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21E2C0u;
    {
        const bool branch_taken_0x21e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2C0u;
            // 0x21e2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2c0) {
            ctx->pc = 0x21E308u;
            goto label_21e308;
        }
    }
    ctx->pc = 0x21E2C8u;
label_21e2c8:
    // 0x21e2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2cc: 0x26052200  addiu       $a1, $s0, 0x2200
    ctx->pc = 0x21e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8704));
    // 0x21e2d0: 0xc05638c  jal         func_158E30
    ctx->pc = 0x21E2D0u;
    SET_GPR_U32(ctx, 31, 0x21E2D8u);
    ctx->pc = 0x21E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2D0u;
            // 0x21e2d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2D8u; }
        if (ctx->pc != 0x21E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2D8u; }
        if (ctx->pc != 0x21E2D8u) { return; }
    }
    ctx->pc = 0x21E2D8u;
label_21e2d8:
    // 0x21e2d8: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x21e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x21e2dc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E2DCu;
    {
        const bool branch_taken_0x21e2dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2DCu;
            // 0x21e2e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2dc) {
            ctx->pc = 0x21E2F4u;
            goto label_21e2f4;
        }
    }
    ctx->pc = 0x21E2E4u;
    // 0x21e2e4: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x21e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x21e2e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E2E8u;
    {
        const bool branch_taken_0x21e2e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2E8u;
            // 0x21e2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2e8) {
            ctx->pc = 0x21E2FCu;
            goto label_21e2fc;
        }
    }
    ctx->pc = 0x21E2F0u;
    // 0x21e2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e2f4:
    // 0x21e2f4: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x21e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x21e2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e2fc:
    // 0x21e2fc: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x21E2FCu;
    SET_GPR_U32(ctx, 31, 0x21E304u);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E304u; }
        if (ctx->pc != 0x21E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E304u; }
        if (ctx->pc != 0x21E304u) { return; }
    }
    ctx->pc = 0x21E304u;
label_21e304:
    // 0x21e304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21e308:
    // 0x21e308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E30Cu;
            // 0x21e310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E314u;
}
