#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GLID_INFO__FP9SPI_STACKi
// Address: 0x2f8db0 - 0x2f8e98
void ps2__GLID_INFO__FP9SPI_STACKi_0x2f8db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLID_INFO__FP9SPI_STACKi_0x2f8db0");
#endif

    switch (ctx->pc) {
        case 0x2f8dc4u: goto label_2f8dc4;
        case 0x2f8dd8u: goto label_2f8dd8;
        case 0x2f8decu: goto label_2f8dec;
        case 0x2f8e00u: goto label_2f8e00;
        case 0x2f8e10u: goto label_2f8e10;
        case 0x2f8e5cu: goto label_2f8e5c;
        case 0x2f8e6cu: goto label_2f8e6c;
        default: break;
    }

    ctx->pc = 0x2f8db0u;

    // 0x2f8db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f8db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f8db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8dbc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8DBCu;
    SET_GPR_U32(ctx, 31, 0x2F8DC4u);
    ctx->pc = 0x2F8DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DBCu;
            // 0x2f8dc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DC4u; }
        if (ctx->pc != 0x2F8DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DC4u; }
        if (ctx->pc != 0x2F8DC4u) { return; }
    }
    ctx->pc = 0x2F8DC4u;
label_2f8dc4:
    // 0x2f8dc4: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2f8dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8dcc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2f8dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8dd0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8DD0u;
    SET_GPR_U32(ctx, 31, 0x2F8DD8u);
    ctx->pc = 0x2F8DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DD0u;
            // 0x2f8dd4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DD8u; }
        if (ctx->pc != 0x2F8DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DD8u; }
        if (ctx->pc != 0x2F8DD8u) { return; }
    }
    ctx->pc = 0x2F8DD8u;
label_2f8dd8:
    // 0x2f8dd8: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2f8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8de0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2f8de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8de4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8DE4u;
    SET_GPR_U32(ctx, 31, 0x2F8DECu);
    ctx->pc = 0x2F8DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DE4u;
            // 0x2f8de8: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DECu; }
        if (ctx->pc != 0x2F8DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DECu; }
        if (ctx->pc != 0x2F8DECu) { return; }
    }
    ctx->pc = 0x2F8DECu;
label_2f8dec:
    // 0x2f8dec: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2f8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8df4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2f8df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8df8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8DF8u;
    SET_GPR_U32(ctx, 31, 0x2F8E00u);
    ctx->pc = 0x2F8DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DF8u;
            // 0x2f8dfc: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E00u; }
        if (ctx->pc != 0x2F8E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E00u; }
        if (ctx->pc != 0x2F8E00u) { return; }
    }
    ctx->pc = 0x2F8E00u;
label_2f8e00:
    // 0x2f8e00: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2f8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e08: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8E08u;
    SET_GPR_U32(ctx, 31, 0x2F8E10u);
    ctx->pc = 0x2F8E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E08u;
            // 0x2f8e0c: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E10u; }
        if (ctx->pc != 0x2F8E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E10u; }
        if (ctx->pc != 0x2F8E10u) { return; }
    }
    ctx->pc = 0x2F8E10u;
label_2f8e10:
    // 0x2f8e10: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2f8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e18: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2f8e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2f8e1c: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x2f8e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f8e20: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2f8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e24: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2f8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2f8e28: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2f8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e2c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2f8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2f8e30: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e34: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f8e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2f8e38: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2f8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e3c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2f8e40: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2f8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e44: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x2f8e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8e48: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2f8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e4c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2f8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f8e50: 0xaf849f58  sw          $a0, -0x60A8($gp)
    ctx->pc = 0x2f8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942552), GPR_U32(ctx, 4));
    // 0x2f8e54: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F8E54u;
    SET_GPR_U32(ctx, 31, 0x2F8E5Cu);
    ctx->pc = 0x2F8E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E54u;
            // 0x2f8e58: 0xaf849f5c  sw          $a0, -0x60A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942556), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E5Cu; }
        if (ctx->pc != 0x2F8E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E5Cu; }
        if (ctx->pc != 0x2F8E5Cu) { return; }
    }
    ctx->pc = 0x2F8E5Cu;
label_2f8e5c:
    // 0x2f8e5c: 0x8f849f58  lw          $a0, -0x60A8($gp)
    ctx->pc = 0x2f8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942552)));
    // 0x2f8e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e64: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F8E64u;
    SET_GPR_U32(ctx, 31, 0x2F8E6Cu);
    ctx->pc = 0x2F8E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E64u;
            // 0x2f8e68: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E6Cu; }
        if (ctx->pc != 0x2F8E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E6Cu; }
        if (ctx->pc != 0x2F8E6Cu) { return; }
    }
    ctx->pc = 0x2F8E6Cu;
label_2f8e6c:
    // 0x2f8e6c: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2f8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2f8e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8e74: 0x87839f60  lh          $v1, -0x60A0($gp)
    ctx->pc = 0x2f8e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942560)));
    // 0x2f8e78: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2f8e7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f8e80: 0xaf849f50  sw          $a0, -0x60B0($gp)
    ctx->pc = 0x2f8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942544), GPR_U32(ctx, 4));
    // 0x2f8e84: 0xa7839f60  sh          $v1, -0x60A0($gp)
    ctx->pc = 0x2f8e84u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942560), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f8e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E90u;
            // 0x2f8e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8E98u;
}
