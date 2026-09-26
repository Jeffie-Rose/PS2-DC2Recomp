#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayEnvBGM__6CSceneFif
// Address: 0x2a6690 - 0x2a671c
void PlayEnvBGM__6CSceneFif_0x2a6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayEnvBGM__6CSceneFif_0x2a6690");
#endif

    switch (ctx->pc) {
        case 0x2a66fcu: goto label_2a66fc;
        default: break;
    }

    ctx->pc = 0x2a6690u;

    // 0x2a6690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6694: 0x3403a484  ori         $v1, $zero, 0xA484
    ctx->pc = 0x2a6694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42116);
    // 0x2a6698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a669c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a66a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a66a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a66a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a66ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a66acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b0: 0x10700015  beq         $v1, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A66B0u;
    {
        const bool branch_taken_0x2a66b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A66B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A66B0u;
            // 0x2a66b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66b0) {
            ctx->pc = 0x2A6708u;
            goto label_2a6708;
        }
    }
    ctx->pc = 0x2A66B8u;
    // 0x2a66b8: 0x3402a48c  ori         $v0, $zero, 0xA48C
    ctx->pc = 0x2a66b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42124);
    // 0x2a66bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a66bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a66c0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2a66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a66c4: 0x3404a488  ori         $a0, $zero, 0xA488
    ctx->pc = 0x2a66c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42120);
    // 0x2a66c8: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x2a66c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a66cc: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2a66ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2a66d0: 0xc420a48c  lwc1        $f0, -0x5B74($at)
    ctx->pc = 0x2a66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a66d4: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2a66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a66d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a66d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a66dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a66dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a66e0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2a66e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2a66e4: 0x8c24a040  lw          $a0, -0x5FC0($at)
    ctx->pc = 0x2a66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942784)));
    // 0x2a66e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a66e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a66ec: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2a66ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2a66f0: 0xc42ca488  lwc1        $f12, -0x5B78($at)
    ctx->pc = 0x2a66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a66f4: 0xc063864  jal         func_18E190
    ctx->pc = 0x2A66F4u;
    SET_GPR_U32(ctx, 31, 0x2A66FCu);
    ctx->pc = 0x2A66F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A66F4u;
            // 0x2a66f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E190u;
    if (runtime->hasFunction(0x18E190u)) {
        auto targetFn = runtime->lookupFunction(0x18E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A66FCu; }
        if (ctx->pc != 0x2A66FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVf__FUiifi_0x18e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A66FCu; }
        if (ctx->pc != 0x2A66FCu) { return; }
    }
    ctx->pc = 0x2A66FCu;
label_2a66fc:
    // 0x2a66fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6700: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2a6700u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2a6704: 0xac30a484  sw          $s0, -0x5B7C($at)
    ctx->pc = 0x2a6704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943876), GPR_U32(ctx, 16));
label_2a6708:
    // 0x2a6708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a670c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a670cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6714: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6714u;
            // 0x2a6718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A671Cu;
}
