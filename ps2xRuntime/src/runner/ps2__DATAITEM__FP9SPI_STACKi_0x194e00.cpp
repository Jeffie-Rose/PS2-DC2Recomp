#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAITEM__FP9SPI_STACKi
// Address: 0x194e00 - 0x194ed4
void ps2__DATAITEM__FP9SPI_STACKi_0x194e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAITEM__FP9SPI_STACKi_0x194e00");
#endif

    switch (ctx->pc) {
        case 0x194e14u: goto label_194e14;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e34u: goto label_194e34;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e80u: goto label_194e80;
        case 0x194e94u: goto label_194e94;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eb8u: goto label_194eb8;
        default: break;
    }

    ctx->pc = 0x194e00u;

    // 0x194e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194e0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194E0Cu;
    SET_GPR_U32(ctx, 31, 0x194E14u);
    ctx->pc = 0x194E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E0Cu;
            // 0x194e10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E14u; }
        if (ctx->pc != 0x194E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E14u; }
        if (ctx->pc != 0x194E14u) { return; }
    }
    ctx->pc = 0x194E14u;
label_194e14:
    // 0x194e14: 0xc06570c  jal         func_195C30
    ctx->pc = 0x194E14u;
    SET_GPR_U32(ctx, 31, 0x194E1Cu);
    ctx->pc = 0x194E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E14u;
            // 0x194e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E1Cu; }
        if (ctx->pc != 0x194E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E1Cu; }
        if (ctx->pc != 0x194E1Cu) { return; }
    }
    ctx->pc = 0x194E1Cu;
label_194e1c:
    // 0x194e1c: 0xaf828b68  sw          $v0, -0x7498($gp)
    ctx->pc = 0x194e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 2));
    // 0x194e20: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194e24: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x194E24u;
    {
        const bool branch_taken_0x194e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194E24u;
            // 0x194e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e24) {
            ctx->pc = 0x194EC0u;
            goto label_194ec0;
        }
    }
    ctx->pc = 0x194E2Cu;
    // 0x194e2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194E2Cu;
    SET_GPR_U32(ctx, 31, 0x194E34u);
    ctx->pc = 0x194E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E2Cu;
            // 0x194e30: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E34u; }
        if (ctx->pc != 0x194E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E34u; }
        if (ctx->pc != 0x194E34u) { return; }
    }
    ctx->pc = 0x194E34u;
label_194e34:
    // 0x194e34: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x194e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x194e38: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x194e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x194e3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x194E3Cu;
    {
        const bool branch_taken_0x194e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194E3Cu;
            // 0x194e40: 0x3c04ff7f  lui         $a0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e3c) {
            ctx->pc = 0x194E58u;
            goto label_194e58;
        }
    }
    ctx->pc = 0x194E44u;
    // 0x194e44: 0x3c03142a  lui         $v1, 0x142A
    ctx->pc = 0x194e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5162 << 16));
    // 0x194e48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x194e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x194e4c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x194e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x194e50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x194e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x194e54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x194e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_194e58:
    // 0x194e58: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e60: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194e64: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194E64u;
    SET_GPR_U32(ctx, 31, 0x194E6Cu);
    ctx->pc = 0x194E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E64u;
            // 0x194e68: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E6Cu; }
        if (ctx->pc != 0x194E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E6Cu; }
        if (ctx->pc != 0x194E6Cu) { return; }
    }
    ctx->pc = 0x194E6Cu;
label_194e6c:
    // 0x194e6c: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e74: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194e78: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194E78u;
    SET_GPR_U32(ctx, 31, 0x194E80u);
    ctx->pc = 0x194E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E78u;
            // 0x194e7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E80u; }
        if (ctx->pc != 0x194E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E80u; }
        if (ctx->pc != 0x194E80u) { return; }
    }
    ctx->pc = 0x194E80u;
label_194e80:
    // 0x194e80: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x194e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e88: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194e8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194E8Cu;
    SET_GPR_U32(ctx, 31, 0x194E94u);
    ctx->pc = 0x194E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E8Cu;
            // 0x194e90: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E94u; }
        if (ctx->pc != 0x194E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E94u; }
        if (ctx->pc != 0x194E94u) { return; }
    }
    ctx->pc = 0x194E94u;
label_194e94:
    // 0x194e94: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x194e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e9c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x194e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194ea0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194EA0u;
    SET_GPR_U32(ctx, 31, 0x194EA8u);
    ctx->pc = 0x194EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194EA0u;
            // 0x194ea4: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EA8u; }
        if (ctx->pc != 0x194EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EA8u; }
        if (ctx->pc != 0x194EA8u) { return; }
    }
    ctx->pc = 0x194EA8u;
label_194ea8:
    // 0x194ea8: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194eb0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194EB0u;
    SET_GPR_U32(ctx, 31, 0x194EB8u);
    ctx->pc = 0x194EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194EB0u;
            // 0x194eb4: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EB8u; }
        if (ctx->pc != 0x194EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EB8u; }
        if (ctx->pc != 0x194EB8u) { return; }
    }
    ctx->pc = 0x194EB8u;
label_194eb8:
    // 0x194eb8: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x194eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x194ebc: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x194ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_194ec0:
    // 0x194ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x194ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194ECCu;
            // 0x194ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194ED4u;
}
