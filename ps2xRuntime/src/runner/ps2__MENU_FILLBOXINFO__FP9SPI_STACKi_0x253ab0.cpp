#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FILLBOXINFO__FP9SPI_STACKi
// Address: 0x253ab0 - 0x253b34
void ps2__MENU_FILLBOXINFO__FP9SPI_STACKi_0x253ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FILLBOXINFO__FP9SPI_STACKi_0x253ab0");
#endif

    switch (ctx->pc) {
        case 0x253adcu: goto label_253adc;
        case 0x253ae8u: goto label_253ae8;
        default: break;
    }

    ctx->pc = 0x253ab0u;

    // 0x253ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x253ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x253abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x253ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x253ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253acc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x253accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ad0: 0x8f8297c4  lw          $v0, -0x683C($gp)
    ctx->pc = 0x253ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940612)));
    // 0x253ad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x253ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ad8: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x253ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_253adc:
    // 0x253adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ae0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253AE0u;
    SET_GPR_U32(ctx, 31, 0x253AE8u);
    ctx->pc = 0x253AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253AE0u;
            // 0x253ae4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253AE8u; }
        if (ctx->pc != 0x253AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253AE8u; }
        if (ctx->pc != 0x253AE8u) { return; }
    }
    ctx->pc = 0x253AE8u;
label_253ae8:
    // 0x253ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253aec: 0x8f8397c4  lw          $v1, -0x683C($gp)
    ctx->pc = 0x253aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940612)));
    // 0x253af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x253af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x253af4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253af8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x253af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x253afc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x253b00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x253b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x253b04: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x253B04u;
    {
        const bool branch_taken_0x253b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253B04u;
            // 0x253b08: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b04) {
            ctx->pc = 0x253ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253adc;
        }
    }
    ctx->pc = 0x253B0Cu;
    // 0x253b0c: 0x8f8397c4  lw          $v1, -0x683C($gp)
    ctx->pc = 0x253b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940612)));
    // 0x253b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253b14: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x253b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x253b18: 0xaf8397c4  sw          $v1, -0x683C($gp)
    ctx->pc = 0x253b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940612), GPR_U32(ctx, 3));
    // 0x253b1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x253b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253b20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x253B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253B2Cu;
            // 0x253b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253B34u;
}
