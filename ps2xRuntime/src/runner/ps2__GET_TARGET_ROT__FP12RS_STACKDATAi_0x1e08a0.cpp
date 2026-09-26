#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_ROT__FP12RS_STACKDATAi
// Address: 0x1e08a0 - 0x1e0934
void ps2__GET_TARGET_ROT__FP12RS_STACKDATAi_0x1e08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_ROT__FP12RS_STACKDATAi_0x1e08a0");
#endif

    switch (ctx->pc) {
        case 0x1e08a0u: goto label_1e08a0;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08acu: goto label_1e08ac;
        case 0x1e08b0u: goto label_1e08b0;
        case 0x1e08b4u: goto label_1e08b4;
        case 0x1e08b8u: goto label_1e08b8;
        case 0x1e08bcu: goto label_1e08bc;
        case 0x1e08c0u: goto label_1e08c0;
        case 0x1e08c4u: goto label_1e08c4;
        case 0x1e08c8u: goto label_1e08c8;
        case 0x1e08ccu: goto label_1e08cc;
        case 0x1e08d0u: goto label_1e08d0;
        case 0x1e08d4u: goto label_1e08d4;
        case 0x1e08d8u: goto label_1e08d8;
        case 0x1e08dcu: goto label_1e08dc;
        case 0x1e08e0u: goto label_1e08e0;
        case 0x1e08e4u: goto label_1e08e4;
        case 0x1e08e8u: goto label_1e08e8;
        case 0x1e08ecu: goto label_1e08ec;
        case 0x1e08f0u: goto label_1e08f0;
        case 0x1e08f4u: goto label_1e08f4;
        case 0x1e08f8u: goto label_1e08f8;
        case 0x1e08fcu: goto label_1e08fc;
        case 0x1e0900u: goto label_1e0900;
        case 0x1e0904u: goto label_1e0904;
        case 0x1e0908u: goto label_1e0908;
        case 0x1e090cu: goto label_1e090c;
        case 0x1e0910u: goto label_1e0910;
        case 0x1e0914u: goto label_1e0914;
        case 0x1e0918u: goto label_1e0918;
        case 0x1e091cu: goto label_1e091c;
        case 0x1e0920u: goto label_1e0920;
        case 0x1e0924u: goto label_1e0924;
        case 0x1e0928u: goto label_1e0928;
        case 0x1e092cu: goto label_1e092c;
        case 0x1e0930u: goto label_1e0930;
        default: break;
    }

    ctx->pc = 0x1e08a0u;

label_1e08a0:
    // 0x1e08a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e08a4:
    // 0x1e08a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e08a8:
    // 0x1e08a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e08ac:
    // 0x1e08ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e08acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e08b0:
    // 0x1e08b0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e08b4:
    if (ctx->pc == 0x1E08B4u) {
        ctx->pc = 0x1E08B4u;
            // 0x1e08b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E08B8u;
        goto label_1e08b8;
    }
    ctx->pc = 0x1E08B0u;
    {
        const bool branch_taken_0x1e08b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E08B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08B0u;
            // 0x1e08b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08b0) {
            ctx->pc = 0x1E08C0u;
            goto label_1e08c0;
        }
    }
    ctx->pc = 0x1E08B8u;
label_1e08b8:
    // 0x1e08b8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e08bc:
    if (ctx->pc == 0x1E08BCu) {
        ctx->pc = 0x1E08BCu;
            // 0x1e08bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E08C0u;
        goto label_1e08c0;
    }
    ctx->pc = 0x1E08B8u;
    {
        const bool branch_taken_0x1e08b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08B8u;
            // 0x1e08bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08b8) {
            ctx->pc = 0x1E0924u;
            goto label_1e0924;
        }
    }
    ctx->pc = 0x1E08C0u;
label_1e08c0:
    // 0x1e08c0: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e08c4:
    // 0x1e08c4: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e08c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
label_1e08c8:
    // 0x1e08c8: 0xc0a0ed8  jal         func_283B60
label_1e08cc:
    if (ctx->pc == 0x1E08CCu) {
        ctx->pc = 0x1E08CCu;
            // 0x1e08cc: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->pc = 0x1E08D0u;
        goto label_1e08d0;
    }
    ctx->pc = 0x1E08C8u;
    SET_GPR_U32(ctx, 31, 0x1E08D0u);
    ctx->pc = 0x1E08CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08C8u;
            // 0x1e08cc: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08D0u; }
        if (ctx->pc != 0x1E08D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08D0u; }
        if (ctx->pc != 0x1E08D0u) { return; }
    }
    ctx->pc = 0x1E08D0u;
label_1e08d0:
    // 0x1e08d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e08d4:
    if (ctx->pc == 0x1E08D4u) {
        ctx->pc = 0x1E08D8u;
        goto label_1e08d8;
    }
    ctx->pc = 0x1E08D0u;
    {
        const bool branch_taken_0x1e08d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e08d0) {
            ctx->pc = 0x1E08E0u;
            goto label_1e08e0;
        }
    }
    ctx->pc = 0x1E08D8u;
label_1e08d8:
    // 0x1e08d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e08dc:
    if (ctx->pc == 0x1E08DCu) {
        ctx->pc = 0x1E08DCu;
            // 0x1e08dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E08E0u;
        goto label_1e08e0;
    }
    ctx->pc = 0x1E08D8u;
    {
        const bool branch_taken_0x1e08d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08D8u;
            // 0x1e08dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08d8) {
            ctx->pc = 0x1E0924u;
            goto label_1e0924;
        }
    }
    ctx->pc = 0x1E08E0u;
label_1e08e0:
    // 0x1e08e0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e08e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e08e4:
    // 0x1e08e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e08e8:
    // 0x1e08e8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e08ec:
    // 0x1e08ec: 0x320f809  jalr        $t9
label_1e08f0:
    if (ctx->pc == 0x1E08F0u) {
        ctx->pc = 0x1E08F0u;
            // 0x1e08f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E08F4u;
        goto label_1e08f4;
    }
    ctx->pc = 0x1E08ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E08F4u);
        ctx->pc = 0x1E08F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08ECu;
            // 0x1e08f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E08F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E08F4u; }
            if (ctx->pc != 0x1E08F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E08F4u;
label_1e08f4:
    // 0x1e08f4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e08f8:
    // 0x1e08f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e08f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e08fc:
    // 0x1e08fc: 0xc0781c4  jal         func_1E0710
label_1e0900:
    if (ctx->pc == 0x1E0900u) {
        ctx->pc = 0x1E0900u;
            // 0x1e0900: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E0904u;
        goto label_1e0904;
    }
    ctx->pc = 0x1E08FCu;
    SET_GPR_U32(ctx, 31, 0x1E0904u);
    ctx->pc = 0x1E0900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08FCu;
            // 0x1e0900: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0904u; }
        if (ctx->pc != 0x1E0904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0904u; }
        if (ctx->pc != 0x1E0904u) { return; }
    }
    ctx->pc = 0x1E0904u;
label_1e0904:
    // 0x1e0904: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e0904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0908:
    // 0x1e0908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e090c:
    // 0x1e090c: 0xc0781c4  jal         func_1E0710
label_1e0910:
    if (ctx->pc == 0x1E0910u) {
        ctx->pc = 0x1E0910u;
            // 0x1e0910: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E0914u;
        goto label_1e0914;
    }
    ctx->pc = 0x1E090Cu;
    SET_GPR_U32(ctx, 31, 0x1E0914u);
    ctx->pc = 0x1E0910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E090Cu;
            // 0x1e0910: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0914u; }
        if (ctx->pc != 0x1E0914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0914u; }
        if (ctx->pc != 0x1E0914u) { return; }
    }
    ctx->pc = 0x1E0914u;
label_1e0914:
    // 0x1e0914: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e0914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0918:
    // 0x1e0918: 0xc0781c4  jal         func_1E0710
label_1e091c:
    if (ctx->pc == 0x1E091Cu) {
        ctx->pc = 0x1E091Cu;
            // 0x1e091c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0920u;
        goto label_1e0920;
    }
    ctx->pc = 0x1E0918u;
    SET_GPR_U32(ctx, 31, 0x1E0920u);
    ctx->pc = 0x1E091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0918u;
            // 0x1e091c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0920u; }
        if (ctx->pc != 0x1E0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0920u; }
        if (ctx->pc != 0x1E0920u) { return; }
    }
    ctx->pc = 0x1E0920u;
label_1e0920:
    // 0x1e0920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0924:
    // 0x1e0924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0928:
    // 0x1e0928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e092c:
    // 0x1e092c: 0x3e00008  jr          $ra
label_1e0930:
    if (ctx->pc == 0x1E0930u) {
        ctx->pc = 0x1E0930u;
            // 0x1e0930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E0934u;
        goto label_fallthrough_0x1e092c;
    }
    ctx->pc = 0x1E092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E092Cu;
            // 0x1e0930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e092c:
    ctx->pc = 0x1E0934u;
}
