#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _fwalk
// Address: 0x126148 - 0x1261dc
void _fwalk_0x126148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fwalk_0x126148");
#endif

    switch (ctx->pc) {
        case 0x126148u: goto label_126148;
        case 0x12614cu: goto label_12614c;
        case 0x126150u: goto label_126150;
        case 0x126154u: goto label_126154;
        case 0x126158u: goto label_126158;
        case 0x12615cu: goto label_12615c;
        case 0x126160u: goto label_126160;
        case 0x126164u: goto label_126164;
        case 0x126168u: goto label_126168;
        case 0x12616cu: goto label_12616c;
        case 0x126170u: goto label_126170;
        case 0x126174u: goto label_126174;
        case 0x126178u: goto label_126178;
        case 0x12617cu: goto label_12617c;
        case 0x126180u: goto label_126180;
        case 0x126184u: goto label_126184;
        case 0x126188u: goto label_126188;
        case 0x12618cu: goto label_12618c;
        case 0x126190u: goto label_126190;
        case 0x126194u: goto label_126194;
        case 0x126198u: goto label_126198;
        case 0x12619cu: goto label_12619c;
        case 0x1261a0u: goto label_1261a0;
        case 0x1261a4u: goto label_1261a4;
        case 0x1261a8u: goto label_1261a8;
        case 0x1261acu: goto label_1261ac;
        case 0x1261b0u: goto label_1261b0;
        case 0x1261b4u: goto label_1261b4;
        case 0x1261b8u: goto label_1261b8;
        case 0x1261bcu: goto label_1261bc;
        case 0x1261c0u: goto label_1261c0;
        case 0x1261c4u: goto label_1261c4;
        case 0x1261c8u: goto label_1261c8;
        case 0x1261ccu: goto label_1261cc;
        case 0x1261d0u: goto label_1261d0;
        case 0x1261d4u: goto label_1261d4;
        case 0x1261d8u: goto label_1261d8;
        default: break;
    }

    ctx->pc = 0x126148u;

label_126148:
    // 0x126148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_12614c:
    // 0x12614c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_126150:
    // 0x126150: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x126150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_126154:
    // 0x126154: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x126154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126158:
    // 0x126158: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x126158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_12615c:
    // 0x12615c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12615cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126160:
    // 0x126160: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x126160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_126164:
    // 0x126164: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x126164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_126168:
    // 0x126168: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x126168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_12616c:
    // 0x12616c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_126170:
    if (ctx->pc == 0x126170u) {
        ctx->pc = 0x126170u;
            // 0x126170: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x126174u;
        goto label_126174;
    }
    ctx->pc = 0x12616Cu;
    {
        const bool branch_taken_0x12616c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12616Cu;
            // 0x126170: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12616c) {
            ctx->pc = 0x1261B8u;
            goto label_1261b8;
        }
    }
    ctx->pc = 0x126174u;
label_126174:
    // 0x126174: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x126174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_126178:
    // 0x126178: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x126178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12617c:
    // 0x12617c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_126180:
    if (ctx->pc == 0x126180u) {
        ctx->pc = 0x126180u;
            // 0x126180: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x126184u;
        goto label_126184;
    }
    ctx->pc = 0x12617Cu;
    {
        const bool branch_taken_0x12617c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x126180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12617Cu;
            // 0x126180: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12617c) {
            ctx->pc = 0x1261ACu;
            goto label_1261ac;
        }
    }
    ctx->pc = 0x126184u;
label_126184:
    // 0x126184: 0x0  nop
    ctx->pc = 0x126184u;
    // NOP
label_126188:
    // 0x126188: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x126188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_12618c:
    // 0x12618c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_126190:
    if (ctx->pc == 0x126190u) {
        ctx->pc = 0x126190u;
            // 0x126190: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x126194u;
        goto label_126194;
    }
    ctx->pc = 0x12618Cu;
    {
        const bool branch_taken_0x12618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12618c) {
            ctx->pc = 0x126190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12618Cu;
            // 0x126190: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1261A4u;
            goto label_1261a4;
        }
    }
    ctx->pc = 0x126194u;
label_126194:
    // 0x126194: 0x280f809  jalr        $s4
label_126198:
    if (ctx->pc == 0x126198u) {
        ctx->pc = 0x126198u;
            // 0x126198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12619Cu;
        goto label_12619c;
    }
    ctx->pc = 0x126194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x12619Cu);
        ctx->pc = 0x126198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126194u;
            // 0x126198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12619Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12619Cu; }
            if (ctx->pc != 0x12619Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12619Cu;
label_12619c:
    // 0x12619c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x12619cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1261a0:
    // 0x1261a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1261a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1261a4:
    // 0x1261a4: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_1261a8:
    if (ctx->pc == 0x1261A8u) {
        ctx->pc = 0x1261A8u;
            // 0x1261a8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x1261ACu;
        goto label_1261ac;
    }
    ctx->pc = 0x1261A4u;
    {
        const bool branch_taken_0x1261a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1261A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261A4u;
            // 0x1261a8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261a4) {
            ctx->pc = 0x126188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126188;
        }
    }
    ctx->pc = 0x1261ACu;
label_1261ac:
    // 0x1261ac: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1261b0:
    // 0x1261b0: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_1261b4:
    if (ctx->pc == 0x1261B4u) {
        ctx->pc = 0x1261B4u;
            // 0x1261b4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1261B8u;
        goto label_1261b8;
    }
    ctx->pc = 0x1261B0u;
    {
        const bool branch_taken_0x1261b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1261b0) {
            ctx->pc = 0x1261B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1261B0u;
            // 0x1261b4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126178;
        }
    }
    ctx->pc = 0x1261B8u;
label_1261b8:
    // 0x1261b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1261b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1261bc:
    // 0x1261bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1261bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1261c0:
    // 0x1261c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1261c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1261c4:
    // 0x1261c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1261c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1261c8:
    // 0x1261c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1261c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1261cc:
    // 0x1261cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1261ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1261d0:
    // 0x1261d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1261d4:
    // 0x1261d4: 0x3e00008  jr          $ra
label_1261d8:
    if (ctx->pc == 0x1261D8u) {
        ctx->pc = 0x1261D8u;
            // 0x1261d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1261DCu;
        goto label_fallthrough_0x1261d4;
    }
    ctx->pc = 0x1261D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261D4u;
            // 0x1261d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1261d4:
    ctx->pc = 0x1261DCu;
}
