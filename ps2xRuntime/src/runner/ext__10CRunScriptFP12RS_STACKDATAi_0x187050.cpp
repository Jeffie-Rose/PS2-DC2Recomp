#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ext__10CRunScriptFP12RS_STACKDATAi
// Address: 0x187050 - 0x1870ec
void ext__10CRunScriptFP12RS_STACKDATAi_0x187050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ext__10CRunScriptFP12RS_STACKDATAi_0x187050");
#endif

    switch (ctx->pc) {
        case 0x187050u: goto label_187050;
        case 0x187054u: goto label_187054;
        case 0x187058u: goto label_187058;
        case 0x18705cu: goto label_18705c;
        case 0x187060u: goto label_187060;
        case 0x187064u: goto label_187064;
        case 0x187068u: goto label_187068;
        case 0x18706cu: goto label_18706c;
        case 0x187070u: goto label_187070;
        case 0x187074u: goto label_187074;
        case 0x187078u: goto label_187078;
        case 0x18707cu: goto label_18707c;
        case 0x187080u: goto label_187080;
        case 0x187084u: goto label_187084;
        case 0x187088u: goto label_187088;
        case 0x18708cu: goto label_18708c;
        case 0x187090u: goto label_187090;
        case 0x187094u: goto label_187094;
        case 0x187098u: goto label_187098;
        case 0x18709cu: goto label_18709c;
        case 0x1870a0u: goto label_1870a0;
        case 0x1870a4u: goto label_1870a4;
        case 0x1870a8u: goto label_1870a8;
        case 0x1870acu: goto label_1870ac;
        case 0x1870b0u: goto label_1870b0;
        case 0x1870b4u: goto label_1870b4;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870bcu: goto label_1870bc;
        case 0x1870c0u: goto label_1870c0;
        case 0x1870c4u: goto label_1870c4;
        case 0x1870c8u: goto label_1870c8;
        case 0x1870ccu: goto label_1870cc;
        case 0x1870d0u: goto label_1870d0;
        case 0x1870d4u: goto label_1870d4;
        case 0x1870d8u: goto label_1870d8;
        case 0x1870dcu: goto label_1870dc;
        case 0x1870e0u: goto label_1870e0;
        case 0x1870e4u: goto label_1870e4;
        case 0x1870e8u: goto label_1870e8;
        default: break;
    }

    ctx->pc = 0x187050u;

label_187050:
    // 0x187050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187054:
    // 0x187054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187058:
    // 0x187058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18705c:
    // 0x18705c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18705cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187060:
    // 0x187060: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_187064:
    // 0x187064: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_187068:
    if (ctx->pc == 0x187068u) {
        ctx->pc = 0x18706Cu;
        goto label_18706c;
    }
    ctx->pc = 0x187064u;
    {
        const bool branch_taken_0x187064 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x187064) {
            ctx->pc = 0x18707Cu;
            goto label_18707c;
        }
    }
    ctx->pc = 0x18706Cu;
label_18706c:
    // 0x18706c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18706cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_187070:
    // 0x187070: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x187070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_187074:
    // 0x187074: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_187078:
    if (ctx->pc == 0x187078u) {
        ctx->pc = 0x18707Cu;
        goto label_18707c;
    }
    ctx->pc = 0x187074u;
    {
        const bool branch_taken_0x187074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187074) {
            ctx->pc = 0x187090u;
            goto label_187090;
        }
    }
    ctx->pc = 0x18707Cu;
label_18707c:
    // 0x18707c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18707cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_187080:
    // 0x187080: 0xc04a0d2  jal         func_128348
label_187084:
    if (ctx->pc == 0x187084u) {
        ctx->pc = 0x187084u;
            // 0x187084: 0x248440e0  addiu       $a0, $a0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
        ctx->pc = 0x187088u;
        goto label_187088;
    }
    ctx->pc = 0x187080u;
    SET_GPR_U32(ctx, 31, 0x187088u);
    ctx->pc = 0x187084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187080u;
            // 0x187084: 0x248440e0  addiu       $a0, $a0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187088u; }
        if (ctx->pc != 0x187088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187088u; }
        if (ctx->pc != 0x187088u) { return; }
    }
    ctx->pc = 0x187088u;
label_187088:
    // 0x187088: 0x10000015  b           . + 4 + (0x15 << 2)
label_18708c:
    if (ctx->pc == 0x18708Cu) {
        ctx->pc = 0x18708Cu;
            // 0x18708c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x187090u;
        goto label_187090;
    }
    ctx->pc = 0x187088u;
    {
        const bool branch_taken_0x187088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187088u;
            // 0x18708c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187088) {
            ctx->pc = 0x1870E0u;
            goto label_1870e0;
        }
    }
    ctx->pc = 0x187090u;
label_187090:
    // 0x187090: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_187094:
    // 0x187094: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x187094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_187098:
    // 0x187098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18709c:
    // 0x18709c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1870a0:
    // 0x1870a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1870a4:
    if (ctx->pc == 0x1870A4u) {
        ctx->pc = 0x1870A4u;
            // 0x1870a4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1870A8u;
        goto label_1870a8;
    }
    ctx->pc = 0x1870A0u;
    {
        const bool branch_taken_0x1870a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1870A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870A0u;
            // 0x1870a4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870a0) {
            ctx->pc = 0x1870B8u;
            goto label_1870b8;
        }
    }
    ctx->pc = 0x1870A8u;
label_1870a8:
    // 0x1870a8: 0xc04a0d2  jal         func_128348
label_1870ac:
    if (ctx->pc == 0x1870ACu) {
        ctx->pc = 0x1870ACu;
            // 0x1870ac: 0x248440e0  addiu       $a0, $a0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
        ctx->pc = 0x1870B0u;
        goto label_1870b0;
    }
    ctx->pc = 0x1870A8u;
    SET_GPR_U32(ctx, 31, 0x1870B0u);
    ctx->pc = 0x1870ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870A8u;
            // 0x1870ac: 0x248440e0  addiu       $a0, $a0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870B0u; }
        if (ctx->pc != 0x1870B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870B0u; }
        if (ctx->pc != 0x1870B0u) { return; }
    }
    ctx->pc = 0x1870B0u;
label_1870b0:
    // 0x1870b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1870b4:
    if (ctx->pc == 0x1870B4u) {
        ctx->pc = 0x1870B8u;
        goto label_1870b8;
    }
    ctx->pc = 0x1870B0u;
    {
        const bool branch_taken_0x1870b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870b0) {
            ctx->pc = 0x1870DCu;
            goto label_1870dc;
        }
    }
    ctx->pc = 0x1870B8u;
label_1870b8:
    // 0x1870b8: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1870bc:
    // 0x1870bc: 0x40f809  jalr        $v0
label_1870c0:
    if (ctx->pc == 0x1870C0u) {
        ctx->pc = 0x1870C0u;
            // 0x1870c0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1870C4u;
        goto label_1870c4;
    }
    ctx->pc = 0x1870BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1870C4u);
        ctx->pc = 0x1870C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870BCu;
            // 0x1870c0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1870C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1870C4u; }
            if (ctx->pc != 0x1870C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1870C4u;
label_1870c4:
    // 0x1870c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1870c8:
    if (ctx->pc == 0x1870C8u) {
        ctx->pc = 0x1870CCu;
        goto label_1870cc;
    }
    ctx->pc = 0x1870C4u;
    {
        const bool branch_taken_0x1870c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1870c4) {
            ctx->pc = 0x1870DCu;
            goto label_1870dc;
        }
    }
    ctx->pc = 0x1870CCu;
label_1870cc:
    // 0x1870cc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1870ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1870d0:
    // 0x1870d0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1870d4:
    // 0x1870d4: 0xc04a0d2  jal         func_128348
label_1870d8:
    if (ctx->pc == 0x1870D8u) {
        ctx->pc = 0x1870D8u;
            // 0x1870d8: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
        ctx->pc = 0x1870DCu;
        goto label_1870dc;
    }
    ctx->pc = 0x1870D4u;
    SET_GPR_U32(ctx, 31, 0x1870DCu);
    ctx->pc = 0x1870D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870D4u;
            // 0x1870d8: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870DCu; }
        if (ctx->pc != 0x1870DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870DCu; }
        if (ctx->pc != 0x1870DCu) { return; }
    }
    ctx->pc = 0x1870DCu;
label_1870dc:
    // 0x1870dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1870dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1870e0:
    // 0x1870e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1870e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1870e4:
    // 0x1870e4: 0x3e00008  jr          $ra
label_1870e8:
    if (ctx->pc == 0x1870E8u) {
        ctx->pc = 0x1870E8u;
            // 0x1870e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1870ECu;
        goto label_fallthrough_0x1870e4;
    }
    ctx->pc = 0x1870E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870E4u;
            // 0x1870e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1870e4:
    ctx->pc = 0x1870ECu;
}
