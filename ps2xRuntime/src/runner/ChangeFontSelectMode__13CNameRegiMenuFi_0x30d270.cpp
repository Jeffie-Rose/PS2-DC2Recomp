#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeFontSelectMode__13CNameRegiMenuFi
// Address: 0x30d270 - 0x30d2f4
void ChangeFontSelectMode__13CNameRegiMenuFi_0x30d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeFontSelectMode__13CNameRegiMenuFi_0x30d270");
#endif

    switch (ctx->pc) {
        case 0x30d2b4u: goto label_30d2b4;
        case 0x30d2c0u: goto label_30d2c0;
        case 0x30d2d0u: goto label_30d2d0;
        case 0x30d2e0u: goto label_30d2e0;
        default: break;
    }

    ctx->pc = 0x30d270u;

    // 0x30d270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30d278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d280: 0x4a00017  bltz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x30D280u;
    {
        const bool branch_taken_0x30d280 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x30D284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D280u;
            // 0x30d284: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d280) {
            ctx->pc = 0x30D2E0u;
            goto label_30d2e0;
        }
    }
    ctx->pc = 0x30D288u;
    // 0x30d288: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x30d288u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30d28c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D28Cu;
    {
        const bool branch_taken_0x30d28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d28c) {
            ctx->pc = 0x30D29Cu;
            goto label_30d29c;
        }
    }
    ctx->pc = 0x30D294u;
    // 0x30d294: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30D294u;
    {
        const bool branch_taken_0x30d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D294u;
            // 0x30d298: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d294) {
            ctx->pc = 0x30D2E4u;
            goto label_30d2e4;
        }
    }
    ctx->pc = 0x30D29Cu;
label_30d29c:
    // 0x30d29c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d2a0: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30D2A0u;
    {
        const bool branch_taken_0x30d2a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2A0u;
            // 0x30d2a4: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a0) {
            ctx->pc = 0x30D2ACu;
            goto label_30d2ac;
        }
    }
    ctx->pc = 0x30D2A8u;
    // 0x30d2a8: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_30d2ac:
    // 0x30d2ac: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x30D2ACu;
    SET_GPR_U32(ctx, 31, 0x30D2B4u);
    ctx->pc = 0x30D2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2ACu;
            // 0x30d2b0: 0x26240300  addiu       $a0, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2B4u; }
        if (ctx->pc != 0x30D2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2B4u; }
        if (ctx->pc != 0x30D2B4u) { return; }
    }
    ctx->pc = 0x30D2B4u;
label_30d2b4:
    // 0x30d2b4: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x30d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x30d2b8: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x30D2B8u;
    SET_GPR_U32(ctx, 31, 0x30D2C0u);
    ctx->pc = 0x30D2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2B8u;
            // 0x30d2bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2C0u; }
        if (ctx->pc != 0x30D2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2C0u; }
        if (ctx->pc != 0x30D2C0u) { return; }
    }
    ctx->pc = 0x30D2C0u;
label_30d2c0:
    // 0x30d2c0: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x30d2c4: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x30d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x30d2c8: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x30D2C8u;
    SET_GPR_U32(ctx, 31, 0x30D2D0u);
    ctx->pc = 0x30D2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2C8u;
            // 0x30d2cc: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2D0u; }
        if (ctx->pc != 0x30D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2D0u; }
        if (ctx->pc != 0x30D2D0u) { return; }
    }
    ctx->pc = 0x30D2D0u;
label_30d2d0:
    // 0x30d2d0: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x30d2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2d8: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x30D2D8u;
    SET_GPR_U32(ctx, 31, 0x30D2E0u);
    ctx->pc = 0x30D2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2D8u;
            // 0x30d2dc: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2E0u; }
        if (ctx->pc != 0x30D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2E0u; }
        if (ctx->pc != 0x30D2E0u) { return; }
    }
    ctx->pc = 0x30D2E0u;
label_30d2e0:
    // 0x30d2e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30d2e4:
    // 0x30d2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30D2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2ECu;
            // 0x30d2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D2F4u;
}
