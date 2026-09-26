#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_END__FP9SPI_STACKi
// Address: 0x175a70 - 0x175b6c
void ps2__IMG_END__FP9SPI_STACKi_0x175a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_END__FP9SPI_STACKi_0x175a70");
#endif

    switch (ctx->pc) {
        case 0x175aa0u: goto label_175aa0;
        case 0x175adcu: goto label_175adc;
        case 0x175af8u: goto label_175af8;
        case 0x175b0cu: goto label_175b0c;
        default: break;
    }

    ctx->pc = 0x175a70u;

    // 0x175a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175a74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x175a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x175a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175a80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x175a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175a88: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x175a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x175a8c: 0x8f8389ec  lw          $v1, -0x7614($gp)
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x175a90: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x175a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
    // 0x175a94: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175a98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x175a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a9c: 0xac4302e4  sw          $v1, 0x2E4($v0)
    ctx->pc = 0x175a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 3));
label_175aa0:
    // 0x175aa0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x175aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x175aa4: 0x24420670  addiu       $v0, $v0, 0x670
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x175aa8: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x175aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x175aac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x175aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175ab0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x175AB0u;
    {
        const bool branch_taken_0x175ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175ab0) {
            ctx->pc = 0x175B40u;
            goto label_175b40;
        }
    }
    ctx->pc = 0x175AB8u;
    // 0x175ab8: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ac0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x175ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x175ac4: 0xac4302c4  sw          $v1, 0x2C4($v0)
    ctx->pc = 0x175ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 708), GPR_U32(ctx, 3));
    // 0x175ac8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175acc: 0x8f8689ec  lw          $a2, -0x7614($gp)
    ctx->pc = 0x175accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x175ad0: 0x8f8789e4  lw          $a3, -0x761C($gp)
    ctx->pc = 0x175ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x175ad4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x175AD4u;
    SET_GPR_U32(ctx, 31, 0x175ADCu);
    ctx->pc = 0x175AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175AD4u;
            // 0x175ad8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ADCu; }
        if (ctx->pc != 0x175ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ADCu; }
        if (ctx->pc != 0x175ADCu) { return; }
    }
    ctx->pc = 0x175ADCu;
label_175adc:
    // 0x175adc: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x175ADCu;
    {
        const bool branch_taken_0x175adc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x175AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175ADCu;
            // 0x175ae0: 0xaf8289d0  sw          $v0, -0x7630($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175adc) {
            ctx->pc = 0x175B40u;
            goto label_175b40;
        }
    }
    ctx->pc = 0x175AE4u;
    // 0x175ae4: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175aec: 0x8f8589ec  lw          $a1, -0x7614($gp)
    ctx->pc = 0x175aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x175af0: 0xc04bc24  jal         func_12F090
    ctx->pc = 0x175AF0u;
    SET_GPR_U32(ctx, 31, 0x175AF8u);
    ctx->pc = 0x175AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175AF0u;
            // 0x175af4: 0x244602dc  addiu       $a2, $v0, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 732));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F090u;
    if (runtime->hasFunction(0x12F090u)) {
        auto targetFn = runtime->lookupFunction(0x12F090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AF8u; }
        if (ctx->pc != 0x175AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGroupNameList__17mgCTextureManagerFiPi_0x12f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AF8u; }
        if (ctx->pc != 0x175AF8u) { return; }
    }
    ctx->pc = 0x175AF8u;
label_175af8:
    // 0x175af8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x175AF8u;
    {
        const bool branch_taken_0x175af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175af8) {
            ctx->pc = 0x175B40u;
            goto label_175b40;
        }
    }
    ctx->pc = 0x175B00u;
    // 0x175b00: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175b04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x175B04u;
    {
        const bool branch_taken_0x175b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B04u;
            // 0x175b08: 0xac6002e0  sw          $zero, 0x2E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b04) {
            ctx->pc = 0x175B1Cu;
            goto label_175b1c;
        }
    }
    ctx->pc = 0x175B0Cu;
label_175b0c:
    // 0x175b0c: 0x0  nop
    ctx->pc = 0x175b0cu;
    // NOP
    // 0x175b10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x175b18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x175b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_175b1c:
    // 0x175b1c: 0x0  nop
    ctx->pc = 0x175b1cu;
    // NOP
    // 0x175b20: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175b24: 0x246402e0  addiu       $a0, $v1, 0x2E0
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x175b28: 0x8c6302e0  lw          $v1, 0x2E0($v1)
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
    // 0x175b2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175b30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x175b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175b34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x175b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175b38: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x175B38u;
    {
        const bool branch_taken_0x175b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b38) {
            ctx->pc = 0x175B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175b0c;
        }
    }
    ctx->pc = 0x175B40u;
label_175b40:
    // 0x175b40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x175b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x175b44: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x175b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x175b48: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x175B48u;
    {
        const bool branch_taken_0x175b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B48u;
            // 0x175b4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b48) {
            ctx->pc = 0x175AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175aa0;
        }
    }
    ctx->pc = 0x175B50u;
    // 0x175b50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x175b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b64: 0x3e00008  jr          $ra
    ctx->pc = 0x175B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B64u;
            // 0x175b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175B6Cu;
}
