#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddWhp__16CUserDataManagerFiii
// Address: 0x19b7c0 - 0x19b818
void AddWhp__16CUserDataManagerFiii_0x19b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddWhp__16CUserDataManagerFiii_0x19b7c0");
#endif

    switch (ctx->pc) {
        case 0x19b7d8u: goto label_19b7d8;
        case 0x19b7fcu: goto label_19b7fc;
        case 0x19b804u: goto label_19b804;
        default: break;
    }

    ctx->pc = 0x19b7c0u;

    // 0x19b7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b7cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19b7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7d0: 0xc066d88  jal         func_19B620
    ctx->pc = 0x19B7D0u;
    SET_GPR_U32(ctx, 31, 0x19B7D8u);
    ctx->pc = 0x19B7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7D0u;
            // 0x19b7d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B620u;
    if (runtime->hasFunction(0x19B620u)) {
        auto targetFn = runtime->lookupFunction(0x19B620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7D8u; }
        if (ctx->pc != 0x19B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHpGage__16CUserDataManagerFii_0x19b620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7D8u; }
        if (ctx->pc != 0x19B7D8u) { return; }
    }
    ctx->pc = 0x19B7D8u;
label_19b7d8:
    // 0x19b7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B7DCu;
    {
        const bool branch_taken_0x19b7dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7DCu;
            // 0x19b7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7dc) {
            ctx->pc = 0x19B7ECu;
            goto label_19b7ec;
        }
    }
    ctx->pc = 0x19B7E4u;
    // 0x19b7e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19B7E4u;
    {
        const bool branch_taken_0x19b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7E4u;
            // 0x19b7e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7e4) {
            ctx->pc = 0x19B808u;
            goto label_19b808;
        }
    }
    ctx->pc = 0x19B7ECu;
label_19b7ec:
    // 0x19b7ec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19b7ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7f4: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19B7F4u;
    SET_GPR_U32(ctx, 31, 0x19B7FCu);
    ctx->pc = 0x19B7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7F4u;
            // 0x19b7f8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7FCu; }
        if (ctx->pc != 0x19B7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7FCu; }
        if (ctx->pc != 0x19B7FCu) { return; }
    }
    ctx->pc = 0x19B7FCu;
label_19b7fc:
    // 0x19b7fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B7FCu;
    SET_GPR_U32(ctx, 31, 0x19B804u);
    ctx->pc = 0x19B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7FCu;
            // 0x19b800: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B804u; }
        if (ctx->pc != 0x19B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B804u; }
        if (ctx->pc != 0x19B804u) { return; }
    }
    ctx->pc = 0x19B804u;
label_19b804:
    // 0x19b804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b808:
    // 0x19b808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b810: 0x3e00008  jr          $ra
    ctx->pc = 0x19B810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B810u;
            // 0x19b814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B818u;
}
