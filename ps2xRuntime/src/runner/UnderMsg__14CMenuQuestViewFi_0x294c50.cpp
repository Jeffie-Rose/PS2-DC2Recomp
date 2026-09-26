#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UnderMsg__14CMenuQuestViewFi
// Address: 0x294c50 - 0x294d3c
void UnderMsg__14CMenuQuestViewFi_0x294c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnderMsg__14CMenuQuestViewFi_0x294c50");
#endif

    switch (ctx->pc) {
        case 0x294c70u: goto label_294c70;
        case 0x294c88u: goto label_294c88;
        case 0x294ca0u: goto label_294ca0;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cd8u: goto label_294cd8;
        case 0x294d04u: goto label_294d04;
        default: break;
    }

    ctx->pc = 0x294c50u;

    // 0x294c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294c60: 0x8f8498a0  lw          $a0, -0x6760($gp)
    ctx->pc = 0x294c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x294c64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c68: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x294C68u;
    SET_GPR_U32(ctx, 31, 0x294C70u);
    ctx->pc = 0x294C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C68u;
            // 0x294c6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C70u; }
        if (ctx->pc != 0x294C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C70u; }
        if (ctx->pc != 0x294C70u) { return; }
    }
    ctx->pc = 0x294C70u;
label_294c70:
    // 0x294c70: 0x8f8298a0  lw          $v0, -0x6760($gp)
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x294c74: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294C74u;
    {
        const bool branch_taken_0x294c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x294C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C74u;
            // 0x294c78: 0xac4017f4  sw          $zero, 0x17F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c74) {
            ctx->pc = 0x294C88u;
            goto label_294c88;
        }
    }
    ctx->pc = 0x294C7Cu;
    // 0x294c7c: 0x8f8498a0  lw          $a0, -0x6760($gp)
    ctx->pc = 0x294c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x294c80: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x294C80u;
    SET_GPR_U32(ctx, 31, 0x294C88u);
    ctx->pc = 0x294C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C80u;
            // 0x294c84: 0x24050dac  addiu       $a1, $zero, 0xDAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C88u; }
        if (ctx->pc != 0x294C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C88u; }
        if (ctx->pc != 0x294C88u) { return; }
    }
    ctx->pc = 0x294C88u;
label_294c88:
    // 0x294c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294c8c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294C8Cu;
    {
        const bool branch_taken_0x294c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x294c8c) {
            ctx->pc = 0x294CA0u;
            goto label_294ca0;
        }
    }
    ctx->pc = 0x294C94u;
    // 0x294c94: 0x8f8498a0  lw          $a0, -0x6760($gp)
    ctx->pc = 0x294c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x294c98: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x294C98u;
    SET_GPR_U32(ctx, 31, 0x294CA0u);
    ctx->pc = 0x294C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C98u;
            // 0x294c9c: 0x24050dad  addiu       $a1, $zero, 0xDAD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3501));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CA0u; }
        if (ctx->pc != 0x294CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CA0u; }
        if (ctx->pc != 0x294CA0u) { return; }
    }
    ctx->pc = 0x294CA0u;
label_294ca0:
    // 0x294ca0: 0xc087898  jal         func_21E260
    ctx->pc = 0x294CA0u;
    SET_GPR_U32(ctx, 31, 0x294CA8u);
    ctx->pc = 0x294CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294CA0u;
            // 0x294ca4: 0x8f8498a0  lw          $a0, -0x6760($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CA8u; }
        if (ctx->pc != 0x294CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CA8u; }
        if (ctx->pc != 0x294CA8u) { return; }
    }
    ctx->pc = 0x294CA8u;
label_294ca8:
    // 0x294ca8: 0x8f8498a0  lw          $a0, -0x6760($gp)
    ctx->pc = 0x294ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x294cac: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x294cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x294cb0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x294cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x294cb4: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x294cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x294cb8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x294cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x294cbc: 0x8c901e14  lw          $s0, 0x1E14($a0)
    ctx->pc = 0x294cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7700)));
    // 0x294cc0: 0x2442ffc8  addiu       $v0, $v0, -0x38
    ctx->pc = 0x294cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x294cc4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x294cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x294cc8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x294cc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x294ccc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x294cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x294cd0: 0xc0876b0  jal         func_21DAC0
    ctx->pc = 0x294CD0u;
    SET_GPR_U32(ctx, 31, 0x294CD8u);
    ctx->pc = 0x294CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294CD0u;
            // 0x294cd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CD8u; }
        if (ctx->pc != 0x294CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CD8u; }
        if (ctx->pc != 0x294CD8u) { return; }
    }
    ctx->pc = 0x294CD8u;
label_294cd8:
    // 0x294cd8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x294cd8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294cdc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x294cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x294ce0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x294ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x294ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x294ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294ce8: 0x0  nop
    ctx->pc = 0x294ce8u;
    // NOP
    // 0x294cec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294cf0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x294cf4: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x294cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x294cf8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x294cf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x294cfc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x294CFCu;
    SET_GPR_U32(ctx, 31, 0x294D04u);
    ctx->pc = 0x294D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294CFCu;
            // 0x294d00: 0xac225310  sw          $v0, 0x5310($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 21264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294D04u; }
        if (ctx->pc != 0x294D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294D04u; }
        if (ctx->pc != 0x294D04u) { return; }
    }
    ctx->pc = 0x294D04u;
label_294d04:
    // 0x294d04: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x294d08: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x294d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x294d0c: 0xac225318  sw          $v0, 0x5318($at)
    ctx->pc = 0x294d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21272), GPR_U32(ctx, 2));
    // 0x294d10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294d14: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x294d18: 0xac23531c  sw          $v1, 0x531C($at)
    ctx->pc = 0x294d18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21276), GPR_U32(ctx, 3));
    // 0x294d1c: 0x2483ffe8  addiu       $v1, $a0, -0x18
    ctx->pc = 0x294d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x294d20: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x294d24: 0xac235314  sw          $v1, 0x5314($at)
    ctx->pc = 0x294d24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21268), GPR_U32(ctx, 3));
    // 0x294d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294d34: 0x3e00008  jr          $ra
    ctx->pc = 0x294D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D34u;
            // 0x294d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294D3Cu;
}
