#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet
// Address: 0x12eea0 - 0x12ef64
void ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0");
#endif

    switch (ctx->pc) {
        case 0x12eee4u: goto label_12eee4;
        case 0x12ef00u: goto label_12ef00;
        case 0x12ef14u: goto label_12ef14;
        case 0x12ef40u: goto label_12ef40;
        default: break;
    }

    ctx->pc = 0x12eea0u;

    // 0x12eea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12eea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12eea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12eeac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12eeb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12eeb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12eeb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12eebc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12eebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eec0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12eec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eec4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12eec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eec8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EEC8u;
    {
        const bool branch_taken_0x12eec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eec8) {
            ctx->pc = 0x12EED8u;
            goto label_12eed8;
        }
    }
    ctx->pc = 0x12EED0u;
    // 0x12eed0: 0x8f908774  lw          $s0, -0x788C($gp)
    ctx->pc = 0x12eed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x12eed4: 0x0  nop
    ctx->pc = 0x12eed4u;
    // NOP
label_12eed8:
    // 0x12eed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eedc: 0xc041ace  jal         func_106B38
    ctx->pc = 0x12EEDCu;
    SET_GPR_U32(ctx, 31, 0x12EEE4u);
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEE4u; }
        if (ctx->pc != 0x12EEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEE4u; }
        if (ctx->pc != 0x12EEE4u) { return; }
    }
    ctx->pc = 0x12EEE4u;
label_12eee4:
    // 0x12eee4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x12eee4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12eee8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x12eee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12eeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eef0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12eef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eef4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12eef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eef8: 0xc04bb64  jal         func_12ED90
    ctx->pc = 0x12EEF8u;
    SET_GPR_U32(ctx, 31, 0x12EF00u);
    ctx->pc = 0x12ED90u;
    if (runtime->hasFunction(0x12ED90u)) {
        auto targetFn = runtime->lookupFunction(0x12ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF00u; }
        if (ctx->pc != 0x12EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTexturePUi_0x12ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF00u; }
        if (ctx->pc != 0x12EF00u) { return; }
    }
    ctx->pc = 0x12EF00u;
label_12ef00:
    // 0x12ef00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ef04: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x12ef04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ef08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef0c: 0xc04ba00  jal         func_12E800
    ctx->pc = 0x12EF0Cu;
    SET_GPR_U32(ctx, 31, 0x12EF14u);
    ctx->pc = 0x12E800u;
    if (runtime->hasFunction(0x12E800u)) {
        auto targetFn = runtime->lookupFunction(0x12E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF14u; }
        if (ctx->pc != 0x12EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexFlush_TagCnt__FPUi_0x12e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF14u; }
        if (ctx->pc != 0x12EF14u) { return; }
    }
    ctx->pc = 0x12EF14u;
label_12ef14:
    // 0x12ef14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12ef18: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x12ef18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ef1c: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x12ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x12ef20: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x12ef20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    // 0x12ef24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EF24u;
    {
        const bool branch_taken_0x12ef24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12ef24) {
            ctx->pc = 0x12EF34u;
            goto label_12ef34;
        }
    }
    ctx->pc = 0x12EF2Cu;
    // 0x12ef2c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x12ef30: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x12ef30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_12ef34:
    // 0x12ef34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef38: 0xc041b7e  jal         func_106DF8
    ctx->pc = 0x12EF38u;
    SET_GPR_U32(ctx, 31, 0x12EF40u);
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF40u; }
        if (ctx->pc != 0x12EF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF40u; }
        if (ctx->pc != 0x12EF40u) { return; }
    }
    ctx->pc = 0x12EF40u;
label_12ef40:
    // 0x12ef40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12ef40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ef44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ef44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ef48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12ef48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ef4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ef4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ef50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ef50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ef54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ef54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ef58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12ef5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EF64u;
}
