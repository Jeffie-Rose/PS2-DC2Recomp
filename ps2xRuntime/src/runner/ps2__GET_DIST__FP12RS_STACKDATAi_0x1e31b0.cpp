#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DIST__FP12RS_STACKDATAi
// Address: 0x1e31b0 - 0x1e3238
void ps2__GET_DIST__FP12RS_STACKDATAi_0x1e31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DIST__FP12RS_STACKDATAi_0x1e31b0");
#endif

    switch (ctx->pc) {
        case 0x1e31b0u: goto label_1e31b0;
        case 0x1e31b4u: goto label_1e31b4;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e31bcu: goto label_1e31bc;
        case 0x1e31c0u: goto label_1e31c0;
        case 0x1e31c4u: goto label_1e31c4;
        case 0x1e31c8u: goto label_1e31c8;
        case 0x1e31ccu: goto label_1e31cc;
        case 0x1e31d0u: goto label_1e31d0;
        case 0x1e31d4u: goto label_1e31d4;
        case 0x1e31d8u: goto label_1e31d8;
        case 0x1e31dcu: goto label_1e31dc;
        case 0x1e31e0u: goto label_1e31e0;
        case 0x1e31e4u: goto label_1e31e4;
        case 0x1e31e8u: goto label_1e31e8;
        case 0x1e31ecu: goto label_1e31ec;
        case 0x1e31f0u: goto label_1e31f0;
        case 0x1e31f4u: goto label_1e31f4;
        case 0x1e31f8u: goto label_1e31f8;
        case 0x1e31fcu: goto label_1e31fc;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3204u: goto label_1e3204;
        case 0x1e3208u: goto label_1e3208;
        case 0x1e320cu: goto label_1e320c;
        case 0x1e3210u: goto label_1e3210;
        case 0x1e3214u: goto label_1e3214;
        case 0x1e3218u: goto label_1e3218;
        case 0x1e321cu: goto label_1e321c;
        case 0x1e3220u: goto label_1e3220;
        case 0x1e3224u: goto label_1e3224;
        case 0x1e3228u: goto label_1e3228;
        case 0x1e322cu: goto label_1e322c;
        case 0x1e3230u: goto label_1e3230;
        case 0x1e3234u: goto label_1e3234;
        default: break;
    }

    ctx->pc = 0x1e31b0u;

label_1e31b0:
    // 0x1e31b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e31b4:
    // 0x1e31b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e31b8:
    // 0x1e31b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e31b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e31bc:
    // 0x1e31bc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e31c0:
    if (ctx->pc == 0x1E31C0u) {
        ctx->pc = 0x1E31C0u;
            // 0x1e31c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E31C4u;
        goto label_1e31c4;
    }
    ctx->pc = 0x1E31BCu;
    {
        const bool branch_taken_0x1e31bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E31C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31BCu;
            // 0x1e31c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31bc) {
            ctx->pc = 0x1E31CCu;
            goto label_1e31cc;
        }
    }
    ctx->pc = 0x1E31C4u;
label_1e31c4:
    // 0x1e31c4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1e31c8:
    if (ctx->pc == 0x1E31C8u) {
        ctx->pc = 0x1E31C8u;
            // 0x1e31c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E31CCu;
        goto label_1e31cc;
    }
    ctx->pc = 0x1E31C4u;
    {
        const bool branch_taken_0x1e31c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31C4u;
            // 0x1e31c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31c4) {
            ctx->pc = 0x1E3228u;
            goto label_1e3228;
        }
    }
    ctx->pc = 0x1E31CCu;
label_1e31cc:
    // 0x1e31cc: 0xc0781ac  jal         func_1E06B0
label_1e31d0:
    if (ctx->pc == 0x1E31D0u) {
        ctx->pc = 0x1E31D0u;
            // 0x1e31d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E31D4u;
        goto label_1e31d4;
    }
    ctx->pc = 0x1E31CCu;
    SET_GPR_U32(ctx, 31, 0x1E31D4u);
    ctx->pc = 0x1E31D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31CCu;
            // 0x1e31d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31D4u; }
        if (ctx->pc != 0x1E31D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31D4u; }
        if (ctx->pc != 0x1E31D4u) { return; }
    }
    ctx->pc = 0x1E31D4u;
label_1e31d4:
    // 0x1e31d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e31d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e31d8:
    // 0x1e31d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e31d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e31dc:
    // 0x1e31dc: 0xc0781ac  jal         func_1E06B0
label_1e31e0:
    if (ctx->pc == 0x1E31E0u) {
        ctx->pc = 0x1E31E0u;
            // 0x1e31e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E31E4u;
        goto label_1e31e4;
    }
    ctx->pc = 0x1E31DCu;
    SET_GPR_U32(ctx, 31, 0x1E31E4u);
    ctx->pc = 0x1E31E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31DCu;
            // 0x1e31e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31E4u; }
        if (ctx->pc != 0x1E31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31E4u; }
        if (ctx->pc != 0x1E31E4u) { return; }
    }
    ctx->pc = 0x1E31E4u;
label_1e31e4:
    // 0x1e31e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e31e8:
    // 0x1e31e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e31e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e31ec:
    // 0x1e31ec: 0xc0781ac  jal         func_1E06B0
label_1e31f0:
    if (ctx->pc == 0x1E31F0u) {
        ctx->pc = 0x1E31F0u;
            // 0x1e31f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E31F4u;
        goto label_1e31f4;
    }
    ctx->pc = 0x1E31ECu;
    SET_GPR_U32(ctx, 31, 0x1E31F4u);
    ctx->pc = 0x1E31F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31ECu;
            // 0x1e31f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31F4u; }
        if (ctx->pc != 0x1E31F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31F4u; }
        if (ctx->pc != 0x1E31F4u) { return; }
    }
    ctx->pc = 0x1E31F4u;
label_1e31f4:
    // 0x1e31f4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e31f8:
    // 0x1e31f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e31f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e31fc:
    // 0x1e31fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e31fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3200:
    // 0x1e3200: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3204:
    // 0x1e3204: 0x320f809  jalr        $t9
label_1e3208:
    if (ctx->pc == 0x1E3208u) {
        ctx->pc = 0x1E3208u;
            // 0x1e3208: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E320Cu;
        goto label_1e320c;
    }
    ctx->pc = 0x1E3204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E320Cu);
        ctx->pc = 0x1E3208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3204u;
            // 0x1e3208: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E320Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E320Cu; }
            if (ctx->pc != 0x1E320Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E320Cu;
label_1e320c:
    // 0x1e320c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3210:
    // 0x1e3210: 0xc04c018  jal         func_130060
label_1e3214:
    if (ctx->pc == 0x1E3214u) {
        ctx->pc = 0x1E3214u;
            // 0x1e3214: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E3218u;
        goto label_1e3218;
    }
    ctx->pc = 0x1E3210u;
    SET_GPR_U32(ctx, 31, 0x1E3218u);
    ctx->pc = 0x1E3214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3210u;
            // 0x1e3214: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3218u; }
        if (ctx->pc != 0x1E3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3218u; }
        if (ctx->pc != 0x1E3218u) { return; }
    }
    ctx->pc = 0x1E3218u;
label_1e3218:
    // 0x1e3218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e321c:
    // 0x1e321c: 0xc0781c4  jal         func_1E0710
label_1e3220:
    if (ctx->pc == 0x1E3220u) {
        ctx->pc = 0x1E3220u;
            // 0x1e3220: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E3224u;
        goto label_1e3224;
    }
    ctx->pc = 0x1E321Cu;
    SET_GPR_U32(ctx, 31, 0x1E3224u);
    ctx->pc = 0x1E3220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E321Cu;
            // 0x1e3220: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3224u; }
        if (ctx->pc != 0x1E3224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3224u; }
        if (ctx->pc != 0x1E3224u) { return; }
    }
    ctx->pc = 0x1E3224u;
label_1e3224:
    // 0x1e3224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3228:
    // 0x1e3228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e322c:
    // 0x1e322c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3230:
    // 0x1e3230: 0x3e00008  jr          $ra
label_1e3234:
    if (ctx->pc == 0x1E3234u) {
        ctx->pc = 0x1E3234u;
            // 0x1e3234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E3238u;
        goto label_fallthrough_0x1e3230;
    }
    ctx->pc = 0x1E3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3230u;
            // 0x1e3234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e3230:
    ctx->pc = 0x1E3238u;
}
