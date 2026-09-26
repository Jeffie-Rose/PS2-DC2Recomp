#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePause__FUii
// Address: 0x18e210 - 0x18e304
void sndSePause__FUii_0x18e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePause__FUii_0x18e210");
#endif

    switch (ctx->pc) {
        case 0x18e22cu: goto label_18e22c;
        case 0x18e234u: goto label_18e234;
        case 0x18e240u: goto label_18e240;
        case 0x18e2ecu: goto label_18e2ec;
        default: break;
    }

    ctx->pc = 0x18e210u;

    // 0x18e210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e214: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e21c: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x18E21Cu;
    {
        const bool branch_taken_0x18e21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E21Cu;
            // 0x18e220: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e21c) {
            ctx->pc = 0x18E2F4u;
            goto label_18e2f4;
        }
    }
    ctx->pc = 0x18E224u;
    // 0x18e224: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18E224u;
    SET_GPR_U32(ctx, 31, 0x18E22Cu);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E22Cu; }
        if (ctx->pc != 0x18E22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E22Cu; }
        if (ctx->pc != 0x18E22Cu) { return; }
    }
    ctx->pc = 0x18E22Cu;
label_18e22c:
    // 0x18e22c: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18E22Cu;
    SET_GPR_U32(ctx, 31, 0x18E234u);
    ctx->pc = 0x18E230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E22Cu;
            // 0x18e230: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E234u; }
        if (ctx->pc != 0x18E234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E234u; }
        if (ctx->pc != 0x18E234u) { return; }
    }
    ctx->pc = 0x18E234u;
label_18e234:
    // 0x18e234: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e238: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E238u;
    SET_GPR_U32(ctx, 31, 0x18E240u);
    ctx->pc = 0x18E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E238u;
            // 0x18e23c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E240u; }
        if (ctx->pc != 0x18E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E240u; }
        if (ctx->pc != 0x18E240u) { return; }
    }
    ctx->pc = 0x18E240u;
label_18e240:
    // 0x18e240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e244: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18E244u;
    {
        const bool branch_taken_0x18e244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e244) {
            ctx->pc = 0x18E2F4u;
            goto label_18e2f4;
        }
    }
    ctx->pc = 0x18E24Cu;
    // 0x18e24c: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E24Cu;
    {
        const bool branch_taken_0x18e24c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E24Cu;
            // 0x18e250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e24c) {
            ctx->pc = 0x18E264u;
            goto label_18e264;
        }
    }
    ctx->pc = 0x18E254u;
    // 0x18e254: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18e258: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18e258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e25c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E25Cu;
    {
        const bool branch_taken_0x18e25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E25Cu;
            // 0x18e260: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e25c) {
            ctx->pc = 0x18E26Cu;
            goto label_18e26c;
        }
    }
    ctx->pc = 0x18E264u;
label_18e264:
    // 0x18e264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E264u;
    {
        const bool branch_taken_0x18e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e264) {
            ctx->pc = 0x18E27Cu;
            goto label_18e27c;
        }
    }
    ctx->pc = 0x18E26Cu;
label_18e26c:
    // 0x18e26c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18e270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e274: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18e278: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18e27c:
    // 0x18e27c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E27Cu;
    {
        const bool branch_taken_0x18e27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e27c) {
            ctx->pc = 0x18E2F4u;
            goto label_18e2f4;
        }
    }
    ctx->pc = 0x18E284u;
    // 0x18e284: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E284u;
    {
        const bool branch_taken_0x18e284 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18e284) {
            ctx->pc = 0x18E29Cu;
            goto label_18e29c;
        }
    }
    ctx->pc = 0x18E28Cu;
    // 0x18e28c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e290: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18e290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e294: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E294u;
    {
        const bool branch_taken_0x18e294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e294) {
            ctx->pc = 0x18E2A4u;
            goto label_18e2a4;
        }
    }
    ctx->pc = 0x18E29Cu;
label_18e29c:
    // 0x18e29c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E29Cu;
    {
        const bool branch_taken_0x18e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E29Cu;
            // 0x18e2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e29c) {
            ctx->pc = 0x18E2B8u;
            goto label_18e2b8;
        }
    }
    ctx->pc = 0x18E2A4u;
label_18e2a4:
    // 0x18e2a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e2a8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18e2ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e2b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e2b4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e2b8:
    // 0x18e2b8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x18E2B8u;
    {
        const bool branch_taken_0x18e2b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2b8) {
            ctx->pc = 0x18E2F4u;
            goto label_18e2f4;
        }
    }
    ctx->pc = 0x18E2C0u;
    // 0x18e2c0: 0x80a40004  lb          $a0, 0x4($a1)
    ctx->pc = 0x18e2c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18e2c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e2c8: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18E2C8u;
    {
        const bool branch_taken_0x18e2c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e2c8) {
            ctx->pc = 0x18E2F4u;
            goto label_18e2f4;
        }
    }
    ctx->pc = 0x18E2D0u;
    // 0x18e2d0: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x18e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18e2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e2d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E2D8u;
    {
        const bool branch_taken_0x18e2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e2d8) {
            ctx->pc = 0x18E2F4u;
            goto label_18e2f4;
        }
    }
    ctx->pc = 0x18E2E0u;
    // 0x18e2e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e2e4: 0xc063db0  jal         func_18F6C0
    ctx->pc = 0x18E2E4u;
    SET_GPR_U32(ctx, 31, 0x18E2ECu);
    ctx->pc = 0x18E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2E4u;
            // 0x18e2e8: 0x80a50005  lb          $a1, 0x5($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F6C0u;
    if (runtime->hasFunction(0x18F6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2ECu; }
        if (ctx->pc != 0x18E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSqStop__Fii_0x18f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2ECu; }
        if (ctx->pc != 0x18E2ECu) { return; }
    }
    ctx->pc = 0x18E2ECu;
label_18e2ec:
    // 0x18e2ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e2f0: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x18e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
label_18e2f4:
    // 0x18e2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18E2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2FCu;
            // 0x18e300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E304u;
}
