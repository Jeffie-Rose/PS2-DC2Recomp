#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowMotionStatus__10CEohMotherFi
// Address: 0x25f0e0 - 0x25f140
void GetNowMotionStatus__10CEohMotherFi_0x25f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowMotionStatus__10CEohMotherFi_0x25f0e0");
#endif

    switch (ctx->pc) {
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f0e4u: goto label_25f0e4;
        case 0x25f0e8u: goto label_25f0e8;
        case 0x25f0ecu: goto label_25f0ec;
        case 0x25f0f0u: goto label_25f0f0;
        case 0x25f0f4u: goto label_25f0f4;
        case 0x25f0f8u: goto label_25f0f8;
        case 0x25f0fcu: goto label_25f0fc;
        case 0x25f100u: goto label_25f100;
        case 0x25f104u: goto label_25f104;
        case 0x25f108u: goto label_25f108;
        case 0x25f10cu: goto label_25f10c;
        case 0x25f110u: goto label_25f110;
        case 0x25f114u: goto label_25f114;
        case 0x25f118u: goto label_25f118;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f120u: goto label_25f120;
        case 0x25f124u: goto label_25f124;
        case 0x25f128u: goto label_25f128;
        case 0x25f12cu: goto label_25f12c;
        case 0x25f130u: goto label_25f130;
        case 0x25f134u: goto label_25f134;
        case 0x25f138u: goto label_25f138;
        case 0x25f13cu: goto label_25f13c;
        default: break;
    }

    ctx->pc = 0x25f0e0u;

label_25f0e0:
    // 0x25f0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25f0e4:
    // 0x25f0e4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25f0e8:
    if (ctx->pc == 0x25F0E8u) {
        ctx->pc = 0x25F0E8u;
            // 0x25f0e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25F0ECu;
        goto label_25f0ec;
    }
    ctx->pc = 0x25F0E4u;
    {
        const bool branch_taken_0x25f0e4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0E4u;
            // 0x25f0e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0e4) {
            ctx->pc = 0x25F0F8u;
            goto label_25f0f8;
        }
    }
    ctx->pc = 0x25F0ECu;
label_25f0ec:
    // 0x25f0ec: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25f0f0:
    // 0x25f0f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f0f4:
    if (ctx->pc == 0x25F0F4u) {
        ctx->pc = 0x25F0F4u;
            // 0x25f0f4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25F0F8u;
        goto label_25f0f8;
    }
    ctx->pc = 0x25F0F0u;
    {
        const bool branch_taken_0x25f0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0F0u;
            // 0x25f0f4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0f0) {
            ctx->pc = 0x25F100u;
            goto label_25f100;
        }
    }
    ctx->pc = 0x25F0F8u;
label_25f0f8:
    // 0x25f0f8: 0x1000000e  b           . + 4 + (0xE << 2)
label_25f0fc:
    if (ctx->pc == 0x25F0FCu) {
        ctx->pc = 0x25F0FCu;
            // 0x25f0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F100u;
        goto label_25f100;
    }
    ctx->pc = 0x25F0F8u;
    {
        const bool branch_taken_0x25f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F0F8u;
            // 0x25f0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0f8) {
            ctx->pc = 0x25F134u;
            goto label_25f134;
        }
    }
    ctx->pc = 0x25F100u;
label_25f100:
    // 0x25f100: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f104:
    // 0x25f104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f108:
    // 0x25f108: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25f10c:
    if (ctx->pc == 0x25F10Cu) {
        ctx->pc = 0x25F110u;
        goto label_25f110;
    }
    ctx->pc = 0x25F108u;
    {
        const bool branch_taken_0x25f108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f108) {
            ctx->pc = 0x25F118u;
            goto label_25f118;
        }
    }
    ctx->pc = 0x25F110u;
label_25f110:
    // 0x25f110: 0x10000008  b           . + 4 + (0x8 << 2)
label_25f114:
    if (ctx->pc == 0x25F114u) {
        ctx->pc = 0x25F114u;
            // 0x25f114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F118u;
        goto label_25f118;
    }
    ctx->pc = 0x25F110u;
    {
        const bool branch_taken_0x25f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F110u;
            // 0x25f114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f110) {
            ctx->pc = 0x25F134u;
            goto label_25f134;
        }
    }
    ctx->pc = 0x25F118u;
label_25f118:
    // 0x25f118: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25f118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25f11c:
    // 0x25f11c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25f120:
    if (ctx->pc == 0x25F120u) {
        ctx->pc = 0x25F120u;
            // 0x25f120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F124u;
        goto label_25f124;
    }
    ctx->pc = 0x25F11Cu;
    {
        const bool branch_taken_0x25f11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F11Cu;
            // 0x25f120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f11c) {
            ctx->pc = 0x25F134u;
            goto label_25f134;
        }
    }
    ctx->pc = 0x25F124u;
label_25f124:
    // 0x25f124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f128:
    // 0x25f128: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x25f128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_25f12c:
    // 0x25f12c: 0x320f809  jalr        $t9
label_25f130:
    if (ctx->pc == 0x25F130u) {
        ctx->pc = 0x25F134u;
        goto label_25f134;
    }
    ctx->pc = 0x25F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F134u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F134u; }
            if (ctx->pc != 0x25F134u) { return; }
        }
        }
    }
    ctx->pc = 0x25F134u;
label_25f134:
    // 0x25f134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f138:
    // 0x25f138: 0x3e00008  jr          $ra
label_25f13c:
    if (ctx->pc == 0x25F13Cu) {
        ctx->pc = 0x25F13Cu;
            // 0x25f13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25F140u;
        goto label_fallthrough_0x25f138;
    }
    ctx->pc = 0x25F138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F138u;
            // 0x25f13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25f138:
    ctx->pc = 0x25F140u;
}
