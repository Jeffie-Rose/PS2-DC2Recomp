#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEntryObjectPos__11CCharacter2FiiPf
// Address: 0x175080 - 0x175158
void GetEntryObjectPos__11CCharacter2FiiPf_0x175080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntryObjectPos__11CCharacter2FiiPf_0x175080");
#endif

    switch (ctx->pc) {
        case 0x175080u: goto label_175080;
        case 0x175084u: goto label_175084;
        case 0x175088u: goto label_175088;
        case 0x17508cu: goto label_17508c;
        case 0x175090u: goto label_175090;
        case 0x175094u: goto label_175094;
        case 0x175098u: goto label_175098;
        case 0x17509cu: goto label_17509c;
        case 0x1750a0u: goto label_1750a0;
        case 0x1750a4u: goto label_1750a4;
        case 0x1750a8u: goto label_1750a8;
        case 0x1750acu: goto label_1750ac;
        case 0x1750b0u: goto label_1750b0;
        case 0x1750b4u: goto label_1750b4;
        case 0x1750b8u: goto label_1750b8;
        case 0x1750bcu: goto label_1750bc;
        case 0x1750c0u: goto label_1750c0;
        case 0x1750c4u: goto label_1750c4;
        case 0x1750c8u: goto label_1750c8;
        case 0x1750ccu: goto label_1750cc;
        case 0x1750d0u: goto label_1750d0;
        case 0x1750d4u: goto label_1750d4;
        case 0x1750d8u: goto label_1750d8;
        case 0x1750dcu: goto label_1750dc;
        case 0x1750e0u: goto label_1750e0;
        case 0x1750e4u: goto label_1750e4;
        case 0x1750e8u: goto label_1750e8;
        case 0x1750ecu: goto label_1750ec;
        case 0x1750f0u: goto label_1750f0;
        case 0x1750f4u: goto label_1750f4;
        case 0x1750f8u: goto label_1750f8;
        case 0x1750fcu: goto label_1750fc;
        case 0x175100u: goto label_175100;
        case 0x175104u: goto label_175104;
        case 0x175108u: goto label_175108;
        case 0x17510cu: goto label_17510c;
        case 0x175110u: goto label_175110;
        case 0x175114u: goto label_175114;
        case 0x175118u: goto label_175118;
        case 0x17511cu: goto label_17511c;
        case 0x175120u: goto label_175120;
        case 0x175124u: goto label_175124;
        case 0x175128u: goto label_175128;
        case 0x17512cu: goto label_17512c;
        case 0x175130u: goto label_175130;
        case 0x175134u: goto label_175134;
        case 0x175138u: goto label_175138;
        case 0x17513cu: goto label_17513c;
        case 0x175140u: goto label_175140;
        case 0x175144u: goto label_175144;
        case 0x175148u: goto label_175148;
        case 0x17514cu: goto label_17514c;
        case 0x175150u: goto label_175150;
        case 0x175154u: goto label_175154;
        default: break;
    }

    ctx->pc = 0x175080u;

label_175080:
    // 0x175080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_175084:
    // 0x175084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x175084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_175088:
    // 0x175088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17508c:
    // 0x17508c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175090:
    // 0x175090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x175090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175094:
    // 0x175094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175098:
    // 0x175098: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x175098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17509c:
    // 0x17509c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1750a0:
    // 0x1750a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1750a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1750a4:
    // 0x1750a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1750a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1750a8:
    // 0x1750a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1750a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1750ac:
    // 0x1750ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1750acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1750b0:
    // 0x1750b0: 0x320f809  jalr        $t9
label_1750b4:
    if (ctx->pc == 0x1750B4u) {
        ctx->pc = 0x1750B4u;
            // 0x1750b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1750B8u;
        goto label_1750b8;
    }
    ctx->pc = 0x1750B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1750B8u);
        ctx->pc = 0x1750B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750B0u;
            // 0x1750b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1750B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1750B8u; }
            if (ctx->pc != 0x1750B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1750B8u;
label_1750b8:
    // 0x1750b8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_1750bc:
    if (ctx->pc == 0x1750BCu) {
        ctx->pc = 0x1750BCu;
            // 0x1750bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1750C0u;
        goto label_1750c0;
    }
    ctx->pc = 0x1750B8u;
    {
        const bool branch_taken_0x1750b8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1750BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750B8u;
            // 0x1750bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750b8) {
            ctx->pc = 0x1750CCu;
            goto label_1750cc;
        }
    }
    ctx->pc = 0x1750C0u;
label_1750c0:
    // 0x1750c0: 0x2a210019  slti        $at, $s1, 0x19
    ctx->pc = 0x1750c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
label_1750c4:
    // 0x1750c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1750c8:
    if (ctx->pc == 0x1750C8u) {
        ctx->pc = 0x1750C8u;
            // 0x1750c8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1750CCu;
        goto label_1750cc;
    }
    ctx->pc = 0x1750C4u;
    {
        const bool branch_taken_0x1750c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1750C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750C4u;
            // 0x1750c8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750c4) {
            ctx->pc = 0x1750D4u;
            goto label_1750d4;
        }
    }
    ctx->pc = 0x1750CCu;
label_1750cc:
    // 0x1750cc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1750d0:
    if (ctx->pc == 0x1750D0u) {
        ctx->pc = 0x1750D0u;
            // 0x1750d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1750D4u;
        goto label_1750d4;
    }
    ctx->pc = 0x1750CCu;
    {
        const bool branch_taken_0x1750cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750CCu;
            // 0x1750d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750cc) {
            ctx->pc = 0x175140u;
            goto label_175140;
        }
    }
    ctx->pc = 0x1750D4u;
label_1750d4:
    // 0x1750d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1750d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1750d8:
    // 0x1750d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1750d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1750dc:
    // 0x1750dc: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1750e0:
    // 0x1750e0: 0x8cc20140  lw          $v0, 0x140($a2)
    ctx->pc = 0x1750e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
label_1750e4:
    // 0x1750e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1750e8:
    if (ctx->pc == 0x1750E8u) {
        ctx->pc = 0x1750ECu;
        goto label_1750ec;
    }
    ctx->pc = 0x1750E4u;
    {
        const bool branch_taken_0x1750e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1750e4) {
            ctx->pc = 0x1750FCu;
            goto label_1750fc;
        }
    }
    ctx->pc = 0x1750ECu;
label_1750ec:
    // 0x1750ec: 0x8cc20148  lw          $v0, 0x148($a2)
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 328)));
label_1750f0:
    // 0x1750f0: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
label_1750f4:
    if (ctx->pc == 0x1750F4u) {
        ctx->pc = 0x1750F8u;
        goto label_1750f8;
    }
    ctx->pc = 0x1750F0u;
    {
        const bool branch_taken_0x1750f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1750f0) {
            ctx->pc = 0x1750FCu;
            goto label_1750fc;
        }
    }
    ctx->pc = 0x1750F8u;
label_1750f8:
    // 0x1750f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1750fc:
    // 0x1750fc: 0x0  nop
    ctx->pc = 0x1750fcu;
    // NOP
label_175100:
    // 0x175100: 0x14710009  bne         $v1, $s1, . + 4 + (0x9 << 2)
label_175104:
    if (ctx->pc == 0x175104u) {
        ctx->pc = 0x175108u;
        goto label_175108;
    }
    ctx->pc = 0x175100u;
    {
        const bool branch_taken_0x175100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x175100) {
            ctx->pc = 0x175128u;
            goto label_175128;
        }
    }
    ctx->pc = 0x175108u;
label_175108:
    // 0x175108: 0x48900  sll         $s1, $a0, 4
    ctx->pc = 0x175108u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_17510c:
    // 0x17510c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x17510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_175110:
    // 0x175110: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x175110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_175114:
    // 0x175114: 0xc04de0c  jal         func_137830
label_175118:
    if (ctx->pc == 0x175118u) {
        ctx->pc = 0x175118u;
            // 0x175118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17511Cu;
        goto label_17511c;
    }
    ctx->pc = 0x175114u;
    SET_GPR_U32(ctx, 31, 0x17511Cu);
    ctx->pc = 0x175118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175114u;
            // 0x175118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17511Cu; }
        if (ctx->pc != 0x17511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17511Cu; }
        if (ctx->pc != 0x17511Cu) { return; }
    }
    ctx->pc = 0x17511Cu;
label_17511c:
    // 0x17511c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x17511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_175120:
    // 0x175120: 0x10000006  b           . + 4 + (0x6 << 2)
label_175124:
    if (ctx->pc == 0x175124u) {
        ctx->pc = 0x175124u;
            // 0x175124: 0x24420140  addiu       $v0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->pc = 0x175128u;
        goto label_175128;
    }
    ctx->pc = 0x175120u;
    {
        const bool branch_taken_0x175120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175120u;
            // 0x175124: 0x24420140  addiu       $v0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175120) {
            ctx->pc = 0x17513Cu;
            goto label_17513c;
        }
    }
    ctx->pc = 0x175128u;
label_175128:
    // 0x175128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17512c:
    // 0x17512c: 0x28820018  slti        $v0, $a0, 0x18
    ctx->pc = 0x17512cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
label_175130:
    // 0x175130: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_175134:
    if (ctx->pc == 0x175134u) {
        ctx->pc = 0x175134u;
            // 0x175134: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x175138u;
        goto label_175138;
    }
    ctx->pc = 0x175130u;
    {
        const bool branch_taken_0x175130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175130u;
            // 0x175134: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175130) {
            ctx->pc = 0x1750DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1750dc;
        }
    }
    ctx->pc = 0x175138u;
label_175138:
    // 0x175138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x175138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17513c:
    // 0x17513c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17513cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175140:
    // 0x175140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175144:
    // 0x175144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175148:
    // 0x175148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17514c:
    // 0x17514c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17514cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175150:
    // 0x175150: 0x3e00008  jr          $ra
label_175154:
    if (ctx->pc == 0x175154u) {
        ctx->pc = 0x175154u;
            // 0x175154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x175158u;
        goto label_fallthrough_0x175150;
    }
    ctx->pc = 0x175150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175150u;
            // 0x175154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x175150:
    ctx->pc = 0x175158u;
}
