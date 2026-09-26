#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddAbs__16CUserDataManagerFiii
// Address: 0x19b880 - 0x19b90c
void AddAbs__16CUserDataManagerFiii_0x19b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddAbs__16CUserDataManagerFiii_0x19b880");
#endif

    switch (ctx->pc) {
        case 0x19b8acu: goto label_19b8ac;
        case 0x19b8b4u: goto label_19b8b4;
        case 0x19b8bcu: goto label_19b8bc;
        case 0x19b8ccu: goto label_19b8cc;
        case 0x19b8f0u: goto label_19b8f0;
        case 0x19b8f8u: goto label_19b8f8;
        default: break;
    }

    ctx->pc = 0x19b880u;

    // 0x19b880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b884: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b888: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b894: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19b894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b898: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B898u;
    {
        const bool branch_taken_0x19b898 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B898u;
            // 0x19b89c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b898) {
            ctx->pc = 0x19B8C4u;
            goto label_19b8c4;
        }
    }
    ctx->pc = 0x19B8A0u;
    // 0x19b8a0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19b8a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b8a4: 0xc067140  jal         func_19C500
    ctx->pc = 0x19B8A4u;
    SET_GPR_U32(ctx, 31, 0x19B8ACu);
    ctx->pc = 0x19B8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8A4u;
            // 0x19b8a8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C500u;
    if (runtime->hasFunction(0x19C500u)) {
        auto targetFn = runtime->lookupFunction(0x19C500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8ACu; }
        if (ctx->pc != 0x19B8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRoboAbs__16CUserDataManagerFf_0x19c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8ACu; }
        if (ctx->pc != 0x19B8ACu) { return; }
    }
    ctx->pc = 0x19B8ACu;
label_19b8ac:
    // 0x19b8ac: 0xc067158  jal         func_19C560
    ctx->pc = 0x19B8ACu;
    SET_GPR_U32(ctx, 31, 0x19B8B4u);
    ctx->pc = 0x19B8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8ACu;
            // 0x19b8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C560u;
    if (runtime->hasFunction(0x19C560u)) {
        auto targetFn = runtime->lookupFunction(0x19C560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8B4u; }
        if (ctx->pc != 0x19B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboAbs__16CUserDataManagerFv_0x19c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8B4u; }
        if (ctx->pc != 0x19B8B4u) { return; }
    }
    ctx->pc = 0x19B8B4u;
label_19b8b4:
    // 0x19b8b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B8B4u;
    SET_GPR_U32(ctx, 31, 0x19B8BCu);
    ctx->pc = 0x19B8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8B4u;
            // 0x19b8b8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8BCu; }
        if (ctx->pc != 0x19B8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8BCu; }
        if (ctx->pc != 0x19B8BCu) { return; }
    }
    ctx->pc = 0x19B8BCu;
label_19b8bc:
    // 0x19b8bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19B8BCu;
    {
        const bool branch_taken_0x19b8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8BCu;
            // 0x19b8c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8bc) {
            ctx->pc = 0x19B8FCu;
            goto label_19b8fc;
        }
    }
    ctx->pc = 0x19B8C4u;
label_19b8c4:
    // 0x19b8c4: 0xc066dbc  jal         func_19B6F0
    ctx->pc = 0x19B8C4u;
    SET_GPR_U32(ctx, 31, 0x19B8CCu);
    ctx->pc = 0x19B6F0u;
    if (runtime->hasFunction(0x19B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x19B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8CCu; }
        if (ctx->pc != 0x19B8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAbsGage__16CUserDataManagerFii_0x19b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8CCu; }
        if (ctx->pc != 0x19B8CCu) { return; }
    }
    ctx->pc = 0x19B8CCu;
label_19b8cc:
    // 0x19b8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8d0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B8D0u;
    {
        const bool branch_taken_0x19b8d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8D0u;
            // 0x19b8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8d0) {
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B8D8u;
    // 0x19b8d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B8D8u;
    {
        const bool branch_taken_0x19b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b8d8) {
            ctx->pc = 0x19B8F8u;
            goto label_19b8f8;
        }
    }
    ctx->pc = 0x19B8E0u;
label_19b8e0:
    // 0x19b8e0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19b8e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8e8: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19B8E8u;
    SET_GPR_U32(ctx, 31, 0x19B8F0u);
    ctx->pc = 0x19B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8E8u;
            // 0x19b8ec: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8F0u; }
        if (ctx->pc != 0x19B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8F0u; }
        if (ctx->pc != 0x19B8F0u) { return; }
    }
    ctx->pc = 0x19B8F0u;
label_19b8f0:
    // 0x19b8f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B8F0u;
    SET_GPR_U32(ctx, 31, 0x19B8F8u);
    ctx->pc = 0x19B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8F0u;
            // 0x19b8f4: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8F8u; }
        if (ctx->pc != 0x19B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8F8u; }
        if (ctx->pc != 0x19B8F8u) { return; }
    }
    ctx->pc = 0x19B8F8u;
label_19b8f8:
    // 0x19b8f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b8fc:
    // 0x19b8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b904: 0x3e00008  jr          $ra
    ctx->pc = 0x19B904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B904u;
            // 0x19b908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B90Cu;
}
