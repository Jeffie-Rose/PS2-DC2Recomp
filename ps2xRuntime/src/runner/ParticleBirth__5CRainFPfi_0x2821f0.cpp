#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParticleBirth__5CRainFPfi
// Address: 0x2821f0 - 0x2822d0
void ParticleBirth__5CRainFPfi_0x2821f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParticleBirth__5CRainFPfi_0x2821f0");
#endif

    switch (ctx->pc) {
        case 0x28222cu: goto label_28222c;
        case 0x282250u: goto label_282250;
        case 0x282264u: goto label_282264;
        case 0x28227cu: goto label_28227c;
        case 0x282288u: goto label_282288;
        case 0x28229cu: goto label_28229c;
        default: break;
    }

    ctx->pc = 0x2821f0u;

    // 0x2821f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2821f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2821f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2821f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2821f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2821f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2821fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2821fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x282200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28220c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28220cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282210: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x282210u;
    {
        const bool branch_taken_0x282210 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x282214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282210u;
            // 0x282214: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282210) {
            ctx->pc = 0x282238u;
            goto label_282238;
        }
    }
    ctx->pc = 0x282218u;
    // 0x282218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28221c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28221cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282220: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282224: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x282224u;
    SET_GPR_U32(ctx, 31, 0x28222Cu);
    ctx->pc = 0x282228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282224u;
            // 0x282228: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28222Cu; }
        if (ctx->pc != 0x28222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28222Cu; }
        if (ctx->pc != 0x28222Cu) { return; }
    }
    ctx->pc = 0x28222Cu;
label_28222c:
    // 0x28222c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x28222cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x282230: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x282230u;
    {
        const bool branch_taken_0x282230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282230u;
            // 0x282234: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282230) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282238u;
label_282238:
    // 0x282238: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x282238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x28223c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282240: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x282240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282244: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282248: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x282248u;
    SET_GPR_U32(ctx, 31, 0x282250u);
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282250u; }
        if (ctx->pc != 0x282250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282250u; }
        if (ctx->pc != 0x282250u) { return; }
    }
    ctx->pc = 0x282250u;
label_282250:
    // 0x282250: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x282250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x282254: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28225c: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x28225Cu;
    SET_GPR_U32(ctx, 31, 0x282264u);
    ctx->pc = 0x282260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28225Cu;
            // 0x282260: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282264u; }
        if (ctx->pc != 0x282264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282264u; }
        if (ctx->pc != 0x282264u) { return; }
    }
    ctx->pc = 0x282264u;
label_282264:
    // 0x282264: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x282264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x282268: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x282268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28226c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282270: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282274: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x282274u;
    SET_GPR_U32(ctx, 31, 0x28227Cu);
    ctx->pc = 0x282278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282274u;
            // 0x282278: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28227Cu; }
        if (ctx->pc != 0x28227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28227Cu; }
        if (ctx->pc != 0x28227Cu) { return; }
    }
    ctx->pc = 0x28227Cu;
label_28227c:
    // 0x28227c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x28227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_282280:
    // 0x282280: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x282284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282288:
    // 0x282288: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x282288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x28228c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28228cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282290: 0x24446730  addiu       $a0, $v0, 0x6730
    ctx->pc = 0x282290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
    // 0x282294: 0xc0a0678  jal         func_2819E0
    ctx->pc = 0x282294u;
    SET_GPR_U32(ctx, 31, 0x28229Cu);
    ctx->pc = 0x282298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282294u;
            // 0x282298: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819E0u;
    if (runtime->hasFunction(0x2819E0u)) {
        auto targetFn = runtime->lookupFunction(0x2819E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28229Cu; }
        if (ctx->pc != 0x28229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__9CParticleFPfPf_0x2819e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28229Cu; }
        if (ctx->pc != 0x28229Cu) { return; }
    }
    ctx->pc = 0x28229Cu;
label_28229c:
    // 0x28229c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28229Cu;
    {
        const bool branch_taken_0x28229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28229c) {
            ctx->pc = 0x2822B4u;
            goto label_2822b4;
        }
    }
    ctx->pc = 0x2822A4u;
    // 0x2822a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2822a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2822a8: 0x2a430064  slti        $v1, $s2, 0x64
    ctx->pc = 0x2822a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2822ac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2822ACu;
    {
        const bool branch_taken_0x2822ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2822B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2822ACu;
            // 0x2822b0: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822ac) {
            ctx->pc = 0x282288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282288;
        }
    }
    ctx->pc = 0x2822B4u;
label_2822b4:
    // 0x2822b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2822b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2822b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2822b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2822bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2822bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2822c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2822c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2822c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2822c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2822c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2822C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2822CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2822C8u;
            // 0x2822cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2822D0u;
}
