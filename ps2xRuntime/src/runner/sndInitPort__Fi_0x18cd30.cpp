#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndInitPort__Fi
// Address: 0x18cd30 - 0x18cee0
void sndInitPort__Fi_0x18cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndInitPort__Fi_0x18cd30");
#endif

    switch (ctx->pc) {
        case 0x18cd44u: goto label_18cd44;
        case 0x18cd60u: goto label_18cd60;
        case 0x18cd68u: goto label_18cd68;
        case 0x18cd94u: goto label_18cd94;
        case 0x18cdd0u: goto label_18cdd0;
        case 0x18ced0u: goto label_18ced0;
        default: break;
    }

    ctx->pc = 0x18cd30u;

    // 0x18cd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18cd34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18cd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cd3c: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x18CD3Cu;
    SET_GPR_U32(ctx, 31, 0x18CD44u);
    ctx->pc = 0x18CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD3Cu;
            // 0x18cd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD44u; }
        if (ctx->pc != 0x18CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD44u; }
        if (ctx->pc != 0x18CD44u) { return; }
    }
    ctx->pc = 0x18CD44u;
label_18cd44:
    // 0x18cd44: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CD44u;
    {
        const bool branch_taken_0x18cd44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD44u;
            // 0x18cd48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd44) {
            ctx->pc = 0x18CD58u;
            goto label_18cd58;
        }
    }
    ctx->pc = 0x18CD4Cu;
    // 0x18cd4c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18cd50: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CD50u;
    {
        const bool branch_taken_0x18cd50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18cd50) {
            ctx->pc = 0x18CD60u;
            goto label_18cd60;
        }
    }
    ctx->pc = 0x18CD58u;
label_18cd58:
    // 0x18cd58: 0xc0633f8  jal         func_18CFE0
    ctx->pc = 0x18CD58u;
    SET_GPR_U32(ctx, 31, 0x18CD60u);
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD60u; }
        if (ctx->pc != 0x18CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD60u; }
        if (ctx->pc != 0x18CD60u) { return; }
    }
    ctx->pc = 0x18CD60u;
label_18cd60:
    // 0x18cd60: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18CD60u;
    SET_GPR_U32(ctx, 31, 0x18CD68u);
    ctx->pc = 0x18CD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD60u;
            // 0x18cd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD68u; }
        if (ctx->pc != 0x18CD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD68u; }
        if (ctx->pc != 0x18CD68u) { return; }
    }
    ctx->pc = 0x18CD68u;
label_18cd68:
    // 0x18cd68: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x18CD68u;
    {
        const bool branch_taken_0x18cd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD68u;
            // 0x18cd6c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd68) {
            ctx->pc = 0x18CEC4u;
            goto label_18cec4;
        }
    }
    ctx->pc = 0x18CD70u;
    // 0x18cd70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd74: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x18cd78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd7c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x18cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x18cd80: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x18cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x18cd84: 0xac44020c  sw          $a0, 0x20C($v0)
    ctx->pc = 0x18cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 524), GPR_U32(ctx, 4));
    // 0x18cd88: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x18cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
    // 0x18cd8c: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x18cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
    // 0x18cd90: 0xac440218  sw          $a0, 0x218($v0)
    ctx->pc = 0x18cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 4));
label_18cd94:
    // 0x18cd94: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18cd98: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18cd9c: 0xa4e4021c  sh          $a0, 0x21C($a3)
    ctx->pc = 0x18cd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 540), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cda0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x18cda0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18cda4: 0xa4e40224  sh          $a0, 0x224($a3)
    ctx->pc = 0x18cda4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 548), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cda8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x18cda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x18cdac: 0xa4e4022c  sh          $a0, 0x22C($a3)
    ctx->pc = 0x18cdacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 556), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdb0: 0xa4e40234  sh          $a0, 0x234($a3)
    ctx->pc = 0x18cdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 564), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdb4: 0xa4e4023c  sh          $a0, 0x23C($a3)
    ctx->pc = 0x18cdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 572), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdb8: 0xa4e40244  sh          $a0, 0x244($a3)
    ctx->pc = 0x18cdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 580), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdbc: 0xa4e4024c  sh          $a0, 0x24C($a3)
    ctx->pc = 0x18cdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 588), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdc0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18CDC0u;
    {
        const bool branch_taken_0x18cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDC0u;
            // 0x18cdc4: 0xa4e40254  sh          $a0, 0x254($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 596), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdc0) {
            ctx->pc = 0x18CD94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cd94;
        }
    }
    ctx->pc = 0x18CDC8u;
    // 0x18cdc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cdd0:
    // 0x18cdd0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x18cdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18cdd4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18cdd8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x18cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x18cddc: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x18cddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18cde0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x18cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x18cde4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x18cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x18cde8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x18cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x18cdec: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x18cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x18cdf0: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x18cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x18cdf4: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x18cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x18cdf8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x18cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x18cdfc: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x18cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x18ce00: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x18ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x18ce04: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x18ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x18ce08: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x18ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x18ce0c: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x18ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x18ce10: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x18ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x18ce14: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x18ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x18ce18: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x18ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x18ce1c: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x18ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x18ce20: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x18ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x18ce24: 0xacc0004c  sw          $zero, 0x4C($a2)
    ctx->pc = 0x18ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
    // 0x18ce28: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x18ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x18ce2c: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x18ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x18ce30: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x18ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x18ce34: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x18ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x18ce38: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x18ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x18ce3c: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x18ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x18ce40: 0xacc00068  sw          $zero, 0x68($a2)
    ctx->pc = 0x18ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
    // 0x18ce44: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x18ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x18ce48: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x18ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x18ce4c: 0xacc00060  sw          $zero, 0x60($a2)
    ctx->pc = 0x18ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 0));
    // 0x18ce50: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x18ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x18ce54: 0xacc00088  sw          $zero, 0x88($a2)
    ctx->pc = 0x18ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 0));
    // 0x18ce58: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x18ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x18ce5c: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x18ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
    // 0x18ce60: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x18ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
    // 0x18ce64: 0xacc00094  sw          $zero, 0x94($a2)
    ctx->pc = 0x18ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 0));
    // 0x18ce68: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x18ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x18ce6c: 0xacc000ac  sw          $zero, 0xAC($a2)
    ctx->pc = 0x18ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 0));
    // 0x18ce70: 0xacc000a4  sw          $zero, 0xA4($a2)
    ctx->pc = 0x18ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 0));
    // 0x18ce74: 0xacc0009c  sw          $zero, 0x9C($a2)
    ctx->pc = 0x18ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 0));
    // 0x18ce78: 0xacc000a0  sw          $zero, 0xA0($a2)
    ctx->pc = 0x18ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 0));
    // 0x18ce7c: 0xacc000a8  sw          $zero, 0xA8($a2)
    ctx->pc = 0x18ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 0));
    // 0x18ce80: 0xacc000b0  sw          $zero, 0xB0($a2)
    ctx->pc = 0x18ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 0));
    // 0x18ce84: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x18ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
    // 0x18ce88: 0xacc000c8  sw          $zero, 0xC8($a2)
    ctx->pc = 0x18ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 0));
    // 0x18ce8c: 0xacc000c0  sw          $zero, 0xC0($a2)
    ctx->pc = 0x18ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 0));
    // 0x18ce90: 0xacc000b8  sw          $zero, 0xB8($a2)
    ctx->pc = 0x18ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
    // 0x18ce94: 0xacc000bc  sw          $zero, 0xBC($a2)
    ctx->pc = 0x18ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 0));
    // 0x18ce98: 0xacc000c4  sw          $zero, 0xC4($a2)
    ctx->pc = 0x18ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 0));
    // 0x18ce9c: 0xacc000cc  sw          $zero, 0xCC($a2)
    ctx->pc = 0x18ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 0));
    // 0x18cea0: 0xacc000b4  sw          $zero, 0xB4($a2)
    ctx->pc = 0x18cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 0));
    // 0x18cea4: 0xacc000e4  sw          $zero, 0xE4($a2)
    ctx->pc = 0x18cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 228), GPR_U32(ctx, 0));
    // 0x18cea8: 0xacc000dc  sw          $zero, 0xDC($a2)
    ctx->pc = 0x18cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 0));
    // 0x18ceac: 0xacc000d4  sw          $zero, 0xD4($a2)
    ctx->pc = 0x18ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 0));
    // 0x18ceb0: 0xacc000d8  sw          $zero, 0xD8($a2)
    ctx->pc = 0x18ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 0));
    // 0x18ceb4: 0xacc000e0  sw          $zero, 0xE0($a2)
    ctx->pc = 0x18ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 0));
    // 0x18ceb8: 0xacc000e8  sw          $zero, 0xE8($a2)
    ctx->pc = 0x18ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 0));
    // 0x18cebc: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x18CEBCu;
    {
        const bool branch_taken_0x18cebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEBCu;
            // 0x18cec0: 0xacc000d0  sw          $zero, 0xD0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cebc) {
            ctx->pc = 0x18CDD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cdd0;
        }
    }
    ctx->pc = 0x18CEC4u;
label_18cec4:
    // 0x18cec4: 0x0  nop
    ctx->pc = 0x18cec4u;
    // NOP
    // 0x18cec8: 0xc06405c  jal         func_190170
    ctx->pc = 0x18CEC8u;
    SET_GPR_U32(ctx, 31, 0x18CED0u);
    ctx->pc = 0x18CECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEC8u;
            // 0x18cecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190170u;
    if (runtime->hasFunction(0x190170u)) {
        auto targetFn = runtime->lookupFunction(0x190170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CED0u; }
        if (ctx->pc != 0x18CED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopSeSeq__Fi_0x190170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CED0u; }
        if (ctx->pc != 0x18CED0u) { return; }
    }
    ctx->pc = 0x18CED0u;
label_18ced0:
    // 0x18ced0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ced4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ced4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x18CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CED8u;
            // 0x18cedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CEE0u;
}
