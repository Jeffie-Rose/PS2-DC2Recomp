#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PRIZE__FP9SPI_STACKi
// Address: 0x219e40 - 0x219f04
void ps2__PRIZE__FP9SPI_STACKi_0x219e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PRIZE__FP9SPI_STACKi_0x219e40");
#endif

    switch (ctx->pc) {
        case 0x219e68u: goto label_219e68;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e90u: goto label_219e90;
        case 0x219ea4u: goto label_219ea4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219eccu: goto label_219ecc;
        case 0x219edcu: goto label_219edc;
        default: break;
    }

    ctx->pc = 0x219e40u;

    // 0x219e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219e4c: 0x8f829284  lw          $v0, -0x6D7C($gp)
    ctx->pc = 0x219e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219e50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219E50u;
    {
        const bool branch_taken_0x219e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219E50u;
            // 0x219e54: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e50) {
            ctx->pc = 0x219E60u;
            goto label_219e60;
        }
    }
    ctx->pc = 0x219E58u;
    // 0x219e58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219E58u;
            // 0x219e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e58) {
            ctx->pc = 0x219EF4u;
            goto label_219ef4;
        }
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219E60u;
    SET_GPR_U32(ctx, 31, 0x219E68u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E68u; }
        if (ctx->pc != 0x219E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E68u; }
        if (ctx->pc != 0x219E68u) { return; }
    }
    ctx->pc = 0x219E68u;
label_219e68:
    // 0x219e68: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e70: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x219e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219e74: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219E74u;
    SET_GPR_U32(ctx, 31, 0x219E7Cu);
    ctx->pc = 0x219E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219E74u;
            // 0x219e78: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E7Cu; }
        if (ctx->pc != 0x219E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E7Cu; }
        if (ctx->pc != 0x219E7Cu) { return; }
    }
    ctx->pc = 0x219E7Cu;
label_219e7c:
    // 0x219e7c: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e84: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219e88: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219E88u;
    SET_GPR_U32(ctx, 31, 0x219E90u);
    ctx->pc = 0x219E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219E88u;
            // 0x219e8c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E90u; }
        if (ctx->pc != 0x219E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E90u; }
        if (ctx->pc != 0x219E90u) { return; }
    }
    ctx->pc = 0x219E90u;
label_219e90:
    // 0x219e90: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e98: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219e9c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219E9Cu;
    SET_GPR_U32(ctx, 31, 0x219EA4u);
    ctx->pc = 0x219EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219E9Cu;
            // 0x219ea0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EA4u; }
        if (ctx->pc != 0x219EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EA4u; }
        if (ctx->pc != 0x219EA4u) { return; }
    }
    ctx->pc = 0x219EA4u;
label_219ea4:
    // 0x219ea4: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219eac: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219eb0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219EB0u;
    SET_GPR_U32(ctx, 31, 0x219EB8u);
    ctx->pc = 0x219EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219EB0u;
            // 0x219eb4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EB8u; }
        if (ctx->pc != 0x219EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EB8u; }
        if (ctx->pc != 0x219EB8u) { return; }
    }
    ctx->pc = 0x219EB8u;
label_219eb8:
    // 0x219eb8: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ec0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x219ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219ec4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219EC4u;
    SET_GPR_U32(ctx, 31, 0x219ECCu);
    ctx->pc = 0x219EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219EC4u;
            // 0x219ec8: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219ECCu; }
        if (ctx->pc != 0x219ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219ECCu; }
        if (ctx->pc != 0x219ECCu) { return; }
    }
    ctx->pc = 0x219ECCu;
label_219ecc:
    // 0x219ecc: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ed4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219ED4u;
    SET_GPR_U32(ctx, 31, 0x219EDCu);
    ctx->pc = 0x219ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219ED4u;
            // 0x219ed8: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EDCu; }
        if (ctx->pc != 0x219EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EDCu; }
        if (ctx->pc != 0x219EDCu) { return; }
    }
    ctx->pc = 0x219EDCu;
label_219edc:
    // 0x219edc: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219ee0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x219ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x219ee4: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x219ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219eec: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x219ef0: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
label_219ef4:
    // 0x219ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219efc: 0x3e00008  jr          $ra
    ctx->pc = 0x219EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219EFCu;
            // 0x219f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219F04u;
}
