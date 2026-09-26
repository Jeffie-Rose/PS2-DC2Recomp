#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SYNC_OBJ__FP12RS_STACKDATAi
// Address: 0x26fd70 - 0x270018
void ps2__CMRS_SYNC_OBJ__FP12RS_STACKDATAi_0x26fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SYNC_OBJ__FP12RS_STACKDATAi_0x26fd70");
#endif

    switch (ctx->pc) {
        case 0x26fddcu: goto label_26fddc;
        case 0x26fe00u: goto label_26fe00;
        case 0x26fe6cu: goto label_26fe6c;
        case 0x26fe7cu: goto label_26fe7c;
        case 0x26fe8cu: goto label_26fe8c;
        case 0x26fe9cu: goto label_26fe9c;
        case 0x26feb4u: goto label_26feb4;
        case 0x26fec4u: goto label_26fec4;
        case 0x26fed4u: goto label_26fed4;
        case 0x26feecu: goto label_26feec;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff18u: goto label_26ff18;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff38u: goto label_26ff38;
        case 0x26ff48u: goto label_26ff48;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff70u: goto label_26ff70;
        case 0x26ff80u: goto label_26ff80;
        case 0x26ff98u: goto label_26ff98;
        case 0x26ffb0u: goto label_26ffb0;
        case 0x26ffe8u: goto label_26ffe8;
        default: break;
    }

    ctx->pc = 0x26fd70u;

    // 0x26fd70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26fd74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26fd78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26fd7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x26fd80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26fd84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26fd84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26fd8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26fd8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26fd94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26fd94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26fd9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26fd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fda0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x26fda0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26fda4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26fda4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26fda8: 0x12820058  beq         $s4, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x26FDA8u;
    {
        const bool branch_taken_0x26fda8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDA8u;
            // 0x26fdac: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fda8) {
            ctx->pc = 0x26FF0Cu;
            goto label_26ff0c;
        }
    }
    ctx->pc = 0x26FDB0u;
    // 0x26fdb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26fdb4: 0x12820055  beq         $s4, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26FDB4u;
    {
        const bool branch_taken_0x26fdb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDB4u;
            // 0x26fdb8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdb4) {
            ctx->pc = 0x26FF0Cu;
            goto label_26ff0c;
        }
    }
    ctx->pc = 0x26FDBCu;
    // 0x26fdbc: 0x12820053  beq         $s4, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26FDBCu;
    {
        const bool branch_taken_0x26fdbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDBCu;
            // 0x26fdc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdbc) {
            ctx->pc = 0x26FF0Cu;
            goto label_26ff0c;
        }
    }
    ctx->pc = 0x26FDC4u;
    // 0x26fdc4: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDC4u;
    {
        const bool branch_taken_0x26fdc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fdc4) {
            ctx->pc = 0x26FDD4u;
            goto label_26fdd4;
        }
    }
    ctx->pc = 0x26FDCCu;
    // 0x26fdcc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x26FDCCu;
    {
        const bool branch_taken_0x26fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDCCu;
            // 0x26fdd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdcc) {
            ctx->pc = 0x26FFB8u;
            goto label_26ffb8;
        }
    }
    ctx->pc = 0x26FDD4u;
label_26fdd4:
    // 0x26fdd4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FDD4u;
    SET_GPR_U32(ctx, 31, 0x26FDDCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDDCu; }
        if (ctx->pc != 0x26FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDDCu; }
        if (ctx->pc != 0x26FDDCu) { return; }
    }
    ctx->pc = 0x26FDDCu;
label_26fddc:
    // 0x26fddc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26fddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26fde0: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26fde4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDE4u;
    {
        const bool branch_taken_0x26fde4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDE4u;
            // 0x26fde8: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fde4) {
            ctx->pc = 0x26FDF4u;
            goto label_26fdf4;
        }
    }
    ctx->pc = 0x26FDECu;
    // 0x26fdec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26FDECu;
    {
        const bool branch_taken_0x26fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDECu;
            // 0x26fdf0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdec) {
            ctx->pc = 0x26FE54u;
            goto label_26fe54;
        }
    }
    ctx->pc = 0x26FDF4u;
label_26fdf4:
    // 0x26fdf4: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26fdf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26FDF8u;
    {
        const bool branch_taken_0x26fdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FDF8u;
            // 0x26fdfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdf8) {
            ctx->pc = 0x26FE28u;
            goto label_26fe28;
        }
    }
    ctx->pc = 0x26FE00u;
label_26fe00:
    // 0x26fe00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26fe04: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26FE04u;
    {
        const bool branch_taken_0x26fe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26fe04) {
            ctx->pc = 0x26FE34u;
            goto label_26fe34;
        }
    }
    ctx->pc = 0x26FE0Cu;
    // 0x26fe0c: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26fe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26fe10: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE10u;
    {
        const bool branch_taken_0x26fe10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe10) {
            ctx->pc = 0x26FE20u;
            goto label_26fe20;
        }
    }
    ctx->pc = 0x26FE18u;
    // 0x26fe18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE18u;
    {
        const bool branch_taken_0x26fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE18u;
            // 0x26fe1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe18) {
            ctx->pc = 0x26FE28u;
            goto label_26fe28;
        }
    }
    ctx->pc = 0x26FE20u;
label_26fe20:
    // 0x26fe20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26FE20u;
    {
        const bool branch_taken_0x26fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE20u;
            // 0x26fe24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe20) {
            ctx->pc = 0x26FE54u;
            goto label_26fe54;
        }
    }
    ctx->pc = 0x26FE28u;
label_26fe28:
    // 0x26fe28: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26fe28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26fe2c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26FE2Cu;
    {
        const bool branch_taken_0x26fe2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fe2c) {
            ctx->pc = 0x26FE00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fe00;
        }
    }
    ctx->pc = 0x26FE34u;
label_26fe34:
    // 0x26fe34: 0x0  nop
    ctx->pc = 0x26fe34u;
    // NOP
    // 0x26fe38: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE38u;
    {
        const bool branch_taken_0x26fe38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE38u;
            // 0x26fe3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe38) {
            ctx->pc = 0x26FE48u;
            goto label_26fe48;
        }
    }
    ctx->pc = 0x26FE40u;
    // 0x26fe40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE40u;
    {
        const bool branch_taken_0x26fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe40) {
            ctx->pc = 0x26FE54u;
            goto label_26fe54;
        }
    }
    ctx->pc = 0x26FE48u;
label_26fe48:
    // 0x26fe48: 0x8cd40008  lw          $s4, 0x8($a2)
    ctx->pc = 0x26fe48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26fe4c: 0x8cd30004  lw          $s3, 0x4($a2)
    ctx->pc = 0x26fe4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26fe50: 0x0  nop
    ctx->pc = 0x26fe50u;
    // NOP
label_26fe54:
    // 0x26fe54: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE54u;
    {
        const bool branch_taken_0x26fe54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE54u;
            // 0x26fe58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe54) {
            ctx->pc = 0x26FE64u;
            goto label_26fe64;
        }
    }
    ctx->pc = 0x26FE5Cu;
    // 0x26fe5c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26FE5Cu;
    {
        const bool branch_taken_0x26fe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE5Cu;
            // 0x26fe60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe5c) {
            ctx->pc = 0x26FFECu;
            goto label_26ffec;
        }
    }
    ctx->pc = 0x26FE64u;
label_26fe64:
    // 0x26fe64: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26FE64u;
    SET_GPR_U32(ctx, 31, 0x26FE6Cu);
    ctx->pc = 0x26FE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE64u;
            // 0x26fe68: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE6Cu; }
        if (ctx->pc != 0x26FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE6Cu; }
        if (ctx->pc != 0x26FE6Cu) { return; }
    }
    ctx->pc = 0x26FE6Cu;
label_26fe6c:
    // 0x26fe6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fe70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe74: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FE74u;
    SET_GPR_U32(ctx, 31, 0x26FE7Cu);
    ctx->pc = 0x26FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE74u;
            // 0x26fe78: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE7Cu; }
        if (ctx->pc != 0x26FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE7Cu; }
        if (ctx->pc != 0x26FE7Cu) { return; }
    }
    ctx->pc = 0x26FE7Cu;
label_26fe7c:
    // 0x26fe7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe80: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26fe84: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FE84u;
    SET_GPR_U32(ctx, 31, 0x26FE8Cu);
    ctx->pc = 0x26FE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE84u;
            // 0x26fe88: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE8Cu; }
        if (ctx->pc != 0x26FE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE8Cu; }
        if (ctx->pc != 0x26FE8Cu) { return; }
    }
    ctx->pc = 0x26FE8Cu;
label_26fe8c:
    // 0x26fe8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe90: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x26fe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26fe94: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FE94u;
    SET_GPR_U32(ctx, 31, 0x26FE9Cu);
    ctx->pc = 0x26FE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE94u;
            // 0x26fe98: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE9Cu; }
        if (ctx->pc != 0x26FE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE9Cu; }
        if (ctx->pc != 0x26FE9Cu) { return; }
    }
    ctx->pc = 0x26FE9Cu;
label_26fe9c:
    // 0x26fe9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26fea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fea4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x26fea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x26fea8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x26fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x26feac: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FEACu;
    SET_GPR_U32(ctx, 31, 0x26FEB4u);
    ctx->pc = 0x26FEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEACu;
            // 0x26feb0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEB4u; }
        if (ctx->pc != 0x26FEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEB4u; }
        if (ctx->pc != 0x26FEB4u) { return; }
    }
    ctx->pc = 0x26FEB4u;
label_26feb4:
    // 0x26feb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26feb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26feb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26febc: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FEBCu;
    SET_GPR_U32(ctx, 31, 0x26FEC4u);
    ctx->pc = 0x26FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEBCu;
            // 0x26fec0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEC4u; }
        if (ctx->pc != 0x26FEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEC4u; }
        if (ctx->pc != 0x26FEC4u) { return; }
    }
    ctx->pc = 0x26FEC4u;
label_26fec4:
    // 0x26fec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fec8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26fec8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26fecc: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FECCu;
    SET_GPR_U32(ctx, 31, 0x26FED4u);
    ctx->pc = 0x26FED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FECCu;
            // 0x26fed0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FED4u; }
        if (ctx->pc != 0x26FED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FED4u; }
        if (ctx->pc != 0x26FED4u) { return; }
    }
    ctx->pc = 0x26FED4u;
label_26fed4:
    // 0x26fed4: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x26fed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26fed8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FED8u;
    {
        const bool branch_taken_0x26fed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FED8u;
            // 0x26fedc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fed8) {
            ctx->pc = 0x26FEF0u;
            goto label_26fef0;
        }
    }
    ctx->pc = 0x26FEE0u;
    // 0x26fee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fee4: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x26FEE4u;
    SET_GPR_U32(ctx, 31, 0x26FEECu);
    ctx->pc = 0x26FEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEE4u;
            // 0x26fee8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEECu; }
        if (ctx->pc != 0x26FEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FEECu; }
        if (ctx->pc != 0x26FEECu) { return; }
    }
    ctx->pc = 0x26FEECu;
label_26feec:
    // 0x26feec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26feecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fef0:
    // 0x26fef0: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x26fef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26fef4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x26FEF4u;
    {
        const bool branch_taken_0x26fef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fef4) {
            ctx->pc = 0x26FFC0u;
            goto label_26ffc0;
        }
    }
    ctx->pc = 0x26FEFCu;
    // 0x26fefc: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26FEFCu;
    SET_GPR_U32(ctx, 31, 0x26FF04u);
    ctx->pc = 0x26FF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FEFCu;
            // 0x26ff00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF04u; }
        if (ctx->pc != 0x26FF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF04u; }
        if (ctx->pc != 0x26FF04u) { return; }
    }
    ctx->pc = 0x26FF04u;
label_26ff04:
    // 0x26ff04: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26FF04u;
    {
        const bool branch_taken_0x26ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF04u;
            // 0x26ff08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff04) {
            ctx->pc = 0x26FFC0u;
            goto label_26ffc0;
        }
    }
    ctx->pc = 0x26FF0Cu;
label_26ff0c:
    // 0x26ff0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff10: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FF10u;
    SET_GPR_U32(ctx, 31, 0x26FF18u);
    ctx->pc = 0x26FF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF10u;
            // 0x26ff14: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF18u; }
        if (ctx->pc != 0x26FF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF18u; }
        if (ctx->pc != 0x26FF18u) { return; }
    }
    ctx->pc = 0x26FF18u;
label_26ff18:
    // 0x26ff18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ff1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff20: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FF20u;
    SET_GPR_U32(ctx, 31, 0x26FF28u);
    ctx->pc = 0x26FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF20u;
            // 0x26ff24: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF28u; }
        if (ctx->pc != 0x26FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF28u; }
        if (ctx->pc != 0x26FF28u) { return; }
    }
    ctx->pc = 0x26FF28u;
label_26ff28:
    // 0x26ff28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff2c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26ff2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26ff30: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FF30u;
    SET_GPR_U32(ctx, 31, 0x26FF38u);
    ctx->pc = 0x26FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF30u;
            // 0x26ff34: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF38u; }
        if (ctx->pc != 0x26FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF38u; }
        if (ctx->pc != 0x26FF38u) { return; }
    }
    ctx->pc = 0x26FF38u;
label_26ff38:
    // 0x26ff38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff3c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x26ff3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26ff40: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FF40u;
    SET_GPR_U32(ctx, 31, 0x26FF48u);
    ctx->pc = 0x26FF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF40u;
            // 0x26ff44: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF48u; }
        if (ctx->pc != 0x26FF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF48u; }
        if (ctx->pc != 0x26FF48u) { return; }
    }
    ctx->pc = 0x26FF48u;
label_26ff48:
    // 0x26ff48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26ff4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff50: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x26ff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x26ff54: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x26ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x26ff58: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FF58u;
    SET_GPR_U32(ctx, 31, 0x26FF60u);
    ctx->pc = 0x26FF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF58u;
            // 0x26ff5c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF60u; }
        if (ctx->pc != 0x26FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF60u; }
        if (ctx->pc != 0x26FF60u) { return; }
    }
    ctx->pc = 0x26FF60u;
label_26ff60:
    // 0x26ff60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26ff64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26ff68: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FF68u;
    SET_GPR_U32(ctx, 31, 0x26FF70u);
    ctx->pc = 0x26FF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF68u;
            // 0x26ff6c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF70u; }
        if (ctx->pc != 0x26FF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF70u; }
        if (ctx->pc != 0x26FF70u) { return; }
    }
    ctx->pc = 0x26FF70u;
label_26ff70:
    // 0x26ff70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff74: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26ff74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26ff78: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FF78u;
    SET_GPR_U32(ctx, 31, 0x26FF80u);
    ctx->pc = 0x26FF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF78u;
            // 0x26ff7c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF80u; }
        if (ctx->pc != 0x26FF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF80u; }
        if (ctx->pc != 0x26FF80u) { return; }
    }
    ctx->pc = 0x26FF80u;
label_26ff80:
    // 0x26ff80: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x26ff80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26ff84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FF84u;
    {
        const bool branch_taken_0x26ff84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF84u;
            // 0x26ff88: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff84) {
            ctx->pc = 0x26FF9Cu;
            goto label_26ff9c;
        }
    }
    ctx->pc = 0x26FF8Cu;
    // 0x26ff8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff90: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26FF90u;
    SET_GPR_U32(ctx, 31, 0x26FF98u);
    ctx->pc = 0x26FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF90u;
            // 0x26ff94: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF98u; }
        if (ctx->pc != 0x26FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF98u; }
        if (ctx->pc != 0x26FF98u) { return; }
    }
    ctx->pc = 0x26FF98u;
label_26ff98:
    // 0x26ff98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ff98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ff9c:
    // 0x26ff9c: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x26ff9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26ffa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FFA0u;
    {
        const bool branch_taken_0x26ffa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ffa0) {
            ctx->pc = 0x26FFC0u;
            goto label_26ffc0;
        }
    }
    ctx->pc = 0x26FFA8u;
    // 0x26ffa8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FFA8u;
    SET_GPR_U32(ctx, 31, 0x26FFB0u);
    ctx->pc = 0x26FFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFA8u;
            // 0x26ffac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFB0u; }
        if (ctx->pc != 0x26FFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFB0u; }
        if (ctx->pc != 0x26FFB0u) { return; }
    }
    ctx->pc = 0x26FFB0u;
label_26ffb0:
    // 0x26ffb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FFB0u;
    {
        const bool branch_taken_0x26ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFB0u;
            // 0x26ffb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffb0) {
            ctx->pc = 0x26FFC0u;
            goto label_26ffc0;
        }
    }
    ctx->pc = 0x26FFB8u;
label_26ffb8:
    // 0x26ffb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26FFB8u;
    {
        const bool branch_taken_0x26ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFB8u;
            // 0x26ffbc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffb8) {
            ctx->pc = 0x26FFF0u;
            goto label_26fff0;
        }
    }
    ctx->pc = 0x26FFC0u;
label_26ffc0:
    // 0x26ffc0: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26ffc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ffc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26ffc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26ffcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26ffccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffd0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x26ffd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x26ffd4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x26ffd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffd8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x26ffd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x26ffdc: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26ffe0: 0xc0968d0  jal         func_25A340
    ctx->pc = 0x26FFE0u;
    SET_GPR_U32(ctx, 31, 0x26FFE8u);
    ctx->pc = 0x26FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFE0u;
            // 0x26ffe4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A340u;
    if (runtime->hasFunction(0x25A340u)) {
        auto targetFn = runtime->lookupFunction(0x25A340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFE8u; }
        if (ctx->pc != 0x26FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSyncObj__12CSceneCmrSeqFiPffffiPc_0x25a340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFE8u; }
        if (ctx->pc != 0x26FFE8u) { return; }
    }
    ctx->pc = 0x26FFE8u;
label_26ffe8:
    // 0x26ffe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ffec:
    // 0x26ffec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26fff0:
    // 0x26fff0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x26fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26fff4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26fff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26fff8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x26fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26fffc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26fffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270000: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x270000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270004: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x270004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x270008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27000c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27000cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270010: 0x3e00008  jr          $ra
    ctx->pc = 0x270010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270010u;
            // 0x270014: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270018u;
}
