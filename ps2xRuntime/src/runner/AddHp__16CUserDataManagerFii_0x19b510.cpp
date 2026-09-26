#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddHp__16CUserDataManagerFii
// Address: 0x19b510 - 0x19b560
void AddHp__16CUserDataManagerFii_0x19b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddHp__16CUserDataManagerFii_0x19b510");
#endif

    switch (ctx->pc) {
        case 0x19b528u: goto label_19b528;
        case 0x19b544u: goto label_19b544;
        case 0x19b54cu: goto label_19b54c;
        default: break;
    }

    ctx->pc = 0x19b510u;

    // 0x19b510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b51c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19b51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b520: 0xc066d30  jal         func_19B4C0
    ctx->pc = 0x19B520u;
    SET_GPR_U32(ctx, 31, 0x19B528u);
    ctx->pc = 0x19B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B520u;
            // 0x19b524: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    if (runtime->hasFunction(0x19B4C0u)) {
        auto targetFn = runtime->lookupFunction(0x19B4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B528u; }
        if (ctx->pc != 0x19B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaHpGage__16CUserDataManagerFi_0x19b4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B528u; }
        if (ctx->pc != 0x19B528u) { return; }
    }
    ctx->pc = 0x19B528u;
label_19b528:
    // 0x19b528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b52c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B52Cu;
    {
        const bool branch_taken_0x19b52c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B52Cu;
            // 0x19b530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b52c) {
            ctx->pc = 0x19B54Cu;
            goto label_19b54c;
        }
    }
    ctx->pc = 0x19B534u;
    // 0x19b534: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19b534u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b53c: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19B53Cu;
    SET_GPR_U32(ctx, 31, 0x19B544u);
    ctx->pc = 0x19B540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B53Cu;
            // 0x19b540: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B544u; }
        if (ctx->pc != 0x19B544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B544u; }
        if (ctx->pc != 0x19B544u) { return; }
    }
    ctx->pc = 0x19B544u;
label_19b544:
    // 0x19b544: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B544u;
    SET_GPR_U32(ctx, 31, 0x19B54Cu);
    ctx->pc = 0x19B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B544u;
            // 0x19b548: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B54Cu; }
        if (ctx->pc != 0x19B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B54Cu; }
        if (ctx->pc != 0x19B54Cu) { return; }
    }
    ctx->pc = 0x19B54Cu;
label_19b54c:
    // 0x19b54c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b558: 0x3e00008  jr          $ra
    ctx->pc = 0x19B558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B558u;
            // 0x19b55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B560u;
}
