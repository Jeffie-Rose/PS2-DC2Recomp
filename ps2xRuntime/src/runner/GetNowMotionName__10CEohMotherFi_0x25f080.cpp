#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowMotionName__10CEohMotherFi
// Address: 0x25f080 - 0x25f0e0
void GetNowMotionName__10CEohMotherFi_0x25f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowMotionName__10CEohMotherFi_0x25f080");
#endif

    switch (ctx->pc) {
        case 0x25f080u: goto label_25f080;
        case 0x25f084u: goto label_25f084;
        case 0x25f088u: goto label_25f088;
        case 0x25f08cu: goto label_25f08c;
        case 0x25f090u: goto label_25f090;
        case 0x25f094u: goto label_25f094;
        case 0x25f098u: goto label_25f098;
        case 0x25f09cu: goto label_25f09c;
        case 0x25f0a0u: goto label_25f0a0;
        case 0x25f0a4u: goto label_25f0a4;
        case 0x25f0a8u: goto label_25f0a8;
        case 0x25f0acu: goto label_25f0ac;
        case 0x25f0b0u: goto label_25f0b0;
        case 0x25f0b4u: goto label_25f0b4;
        case 0x25f0b8u: goto label_25f0b8;
        case 0x25f0bcu: goto label_25f0bc;
        case 0x25f0c0u: goto label_25f0c0;
        case 0x25f0c4u: goto label_25f0c4;
        case 0x25f0c8u: goto label_25f0c8;
        case 0x25f0ccu: goto label_25f0cc;
        case 0x25f0d0u: goto label_25f0d0;
        case 0x25f0d4u: goto label_25f0d4;
        case 0x25f0d8u: goto label_25f0d8;
        case 0x25f0dcu: goto label_25f0dc;
        default: break;
    }

    ctx->pc = 0x25f080u;

label_25f080:
    // 0x25f080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25f084:
    // 0x25f084: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25f088:
    if (ctx->pc == 0x25F088u) {
        ctx->pc = 0x25F088u;
            // 0x25f088: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25F08Cu;
        goto label_25f08c;
    }
    ctx->pc = 0x25F084u;
    {
        const bool branch_taken_0x25f084 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F084u;
            // 0x25f088: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f084) {
            ctx->pc = 0x25F098u;
            goto label_25f098;
        }
    }
    ctx->pc = 0x25F08Cu;
label_25f08c:
    // 0x25f08c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25f090:
    // 0x25f090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f094:
    if (ctx->pc == 0x25F094u) {
        ctx->pc = 0x25F094u;
            // 0x25f094: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25F098u;
        goto label_25f098;
    }
    ctx->pc = 0x25F090u;
    {
        const bool branch_taken_0x25f090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F090u;
            // 0x25f094: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f090) {
            ctx->pc = 0x25F0A0u;
            goto label_25f0a0;
        }
    }
    ctx->pc = 0x25F098u;
label_25f098:
    // 0x25f098: 0x1000000e  b           . + 4 + (0xE << 2)
label_25f09c:
    if (ctx->pc == 0x25F09Cu) {
        ctx->pc = 0x25F09Cu;
            // 0x25f09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F0A0u;
        goto label_25f0a0;
    }
    ctx->pc = 0x25F098u;
    {
        const bool branch_taken_0x25f098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F098u;
            // 0x25f09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f098) {
            ctx->pc = 0x25F0D4u;
            goto label_25f0d4;
        }
    }
    ctx->pc = 0x25F0A0u;
label_25f0a0:
    // 0x25f0a0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f0a4:
    // 0x25f0a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f0a8:
    // 0x25f0a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25f0ac:
    if (ctx->pc == 0x25F0ACu) {
        ctx->pc = 0x25F0B0u;
        goto label_25f0b0;
    }
    ctx->pc = 0x25F0A8u;
    {
        const bool branch_taken_0x25f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f0a8) {
            ctx->pc = 0x25F0B8u;
            goto label_25f0b8;
        }
    }
    ctx->pc = 0x25F0B0u;
label_25f0b0:
    // 0x25f0b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_25f0b4:
    if (ctx->pc == 0x25F0B4u) {
        ctx->pc = 0x25F0B4u;
            // 0x25f0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F0B8u;
        goto label_25f0b8;
    }
    ctx->pc = 0x25F0B0u;
    {
        const bool branch_taken_0x25f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0B0u;
            // 0x25f0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0b0) {
            ctx->pc = 0x25F0D4u;
            goto label_25f0d4;
        }
    }
    ctx->pc = 0x25F0B8u;
label_25f0b8:
    // 0x25f0b8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25f0bc:
    // 0x25f0bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25f0c0:
    if (ctx->pc == 0x25F0C0u) {
        ctx->pc = 0x25F0C0u;
            // 0x25f0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F0C4u;
        goto label_25f0c4;
    }
    ctx->pc = 0x25F0BCu;
    {
        const bool branch_taken_0x25f0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0BCu;
            // 0x25f0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0bc) {
            ctx->pc = 0x25F0D4u;
            goto label_25f0d4;
        }
    }
    ctx->pc = 0x25F0C4u;
label_25f0c4:
    // 0x25f0c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f0c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f0c8:
    // 0x25f0c8: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x25f0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_25f0cc:
    // 0x25f0cc: 0x320f809  jalr        $t9
label_25f0d0:
    if (ctx->pc == 0x25F0D0u) {
        ctx->pc = 0x25F0D4u;
        goto label_25f0d4;
    }
    ctx->pc = 0x25F0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F0D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F0D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F0D4u; }
            if (ctx->pc != 0x25F0D4u) { return; }
        }
        }
    }
    ctx->pc = 0x25F0D4u;
label_25f0d4:
    // 0x25f0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f0d8:
    // 0x25f0d8: 0x3e00008  jr          $ra
label_25f0dc:
    if (ctx->pc == 0x25F0DCu) {
        ctx->pc = 0x25F0DCu;
            // 0x25f0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25F0E0u;
        goto label_fallthrough_0x25f0d8;
    }
    ctx->pc = 0x25F0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0D8u;
            // 0x25f0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25f0d8:
    ctx->pc = 0x25F0E0u;
}
