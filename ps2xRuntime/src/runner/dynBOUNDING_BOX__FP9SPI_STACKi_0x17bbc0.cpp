#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynBOUNDING_BOX__FP9SPI_STACKi
// Address: 0x17bbc0 - 0x17bc68
void dynBOUNDING_BOX__FP9SPI_STACKi_0x17bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynBOUNDING_BOX__FP9SPI_STACKi_0x17bbc0");
#endif

    switch (ctx->pc) {
        case 0x17bbf0u: goto label_17bbf0;
        case 0x17bc0cu: goto label_17bc0c;
        case 0x17bc28u: goto label_17bc28;
        case 0x17bc4cu: goto label_17bc4c;
        default: break;
    }

    ctx->pc = 0x17bbc0u;

    // 0x17bbc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bbc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17bbc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17bbcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17bbd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17bbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bbd8: 0x8f858a2c  lw          $a1, -0x75D4($gp)
    ctx->pc = 0x17bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x17bbdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbe0: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17bbe4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17bbe8: 0xc05eb0c  jal         func_17AC30
    ctx->pc = 0x17BBE8u;
    SET_GPR_U32(ctx, 31, 0x17BBF0u);
    ctx->pc = 0x17BBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBE8u;
            // 0x17bbec: 0xaf828a2c  sw          $v0, -0x75D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (runtime->hasFunction(0x17AC30u)) {
        auto targetFn = runtime->lookupFunction(0x17AC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBF0u; }
        if (ctx->pc != 0x17BBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetBoundingBox__13CDynamicAnimeFi_0x17ac30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBF0u; }
        if (ctx->pc != 0x17BBF0u) { return; }
    }
    ctx->pc = 0x17BBF0u;
label_17bbf0:
    // 0x17bbf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17bbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbf4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BBF4u;
    {
        const bool branch_taken_0x17bbf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBF4u;
            // 0x17bbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbf4) {
            ctx->pc = 0x17BC04u;
            goto label_17bc04;
        }
    }
    ctx->pc = 0x17BBFCu;
    // 0x17bbfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17BBFCu;
    {
        const bool branch_taken_0x17bbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBFCu;
            // 0x17bc00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbfc) {
            ctx->pc = 0x17BC50u;
            goto label_17bc50;
        }
    }
    ctx->pc = 0x17BC04u;
label_17bc04:
    // 0x17bc04: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17BC04u;
    SET_GPR_U32(ctx, 31, 0x17BC0Cu);
    ctx->pc = 0x17BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC04u;
            // 0x17bc08: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC0Cu; }
        if (ctx->pc != 0x17BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC0Cu; }
        if (ctx->pc != 0x17BC0Cu) { return; }
    }
    ctx->pc = 0x17BC0Cu;
label_17bc0c:
    // 0x17bc0c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x17bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x17bc10: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x17bc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17bc14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BC14u;
    {
        const bool branch_taken_0x17bc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC14u;
            // 0x17bc18: 0x2a420007  slti        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc14) {
            ctx->pc = 0x17BC38u;
            goto label_17bc38;
        }
    }
    ctx->pc = 0x17BC1Cu;
    // 0x17bc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17bc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc20: 0xc051928  jal         func_1464A0
    ctx->pc = 0x17BC20u;
    SET_GPR_U32(ctx, 31, 0x17BC28u);
    ctx->pc = 0x17BC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC20u;
            // 0x17bc24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC28u; }
        if (ctx->pc != 0x17BC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC28u; }
        if (ctx->pc != 0x17BC28u) { return; }
    }
    ctx->pc = 0x17BC28u;
label_17bc28:
    // 0x17bc28: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x17bc28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17bc2c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x17bc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17bc30: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x17bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x17bc34: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x17bc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
label_17bc38:
    // 0x17bc38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BC38u;
    {
        const bool branch_taken_0x17bc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC38u;
            // 0x17bc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc38) {
            ctx->pc = 0x17BC50u;
            goto label_17bc50;
        }
    }
    ctx->pc = 0x17BC40u;
    // 0x17bc40: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x17bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17bc44: 0xc051928  jal         func_1464A0
    ctx->pc = 0x17BC44u;
    SET_GPR_U32(ctx, 31, 0x17BC4Cu);
    ctx->pc = 0x17BC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC44u;
            // 0x17bc48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC4Cu; }
        if (ctx->pc != 0x17BC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC4Cu; }
        if (ctx->pc != 0x17BC4Cu) { return; }
    }
    ctx->pc = 0x17BC4Cu;
label_17bc4c:
    // 0x17bc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bc50:
    // 0x17bc50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bc54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17bc54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bc58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bc58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bc5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bc60: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC60u;
            // 0x17bc64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BC68u;
}
