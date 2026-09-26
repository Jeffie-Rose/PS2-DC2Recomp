#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ipuVdec
// Address: 0x10acb8 - 0x10ae30
void _ipuVdec_0x10acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ipuVdec_0x10acb8");
#endif

    switch (ctx->pc) {
        case 0x10ad08u: goto label_10ad08;
        case 0x10ad20u: goto label_10ad20;
        case 0x10ad98u: goto label_10ad98;
        case 0x10adb0u: goto label_10adb0;
        default: break;
    }

    ctx->pc = 0x10acb8u;

    // 0x10acb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10acb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10acbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10acc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10acc4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10acc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10accc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x10acd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10acd4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x10acd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x10acd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10acdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10acdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ace0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ace4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ace4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ace8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ace8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10acecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10acf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10acf4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10acf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10acf8: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10ACF8u;
    {
        const bool branch_taken_0x10acf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACF8u;
            // 0x10acfc: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acf8) {
            ctx->pc = 0x10AD50u;
            goto label_10ad50;
        }
    }
    ctx->pc = 0x10AD00u;
    // 0x10ad00: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x10ad00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x10ad04: 0x0  nop
    ctx->pc = 0x10ad04u;
    // NOP
label_10ad08:
    // 0x10ad08: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad0c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10ad0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10ad10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD10u;
    {
        const bool branch_taken_0x10ad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD10u;
            // 0x10ad14: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad10) {
            ctx->pc = 0x10AD24u;
            goto label_10ad24;
        }
    }
    ctx->pc = 0x10AD18u;
    // 0x10ad18: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10AD18u;
    SET_GPR_U32(ctx, 31, 0x10AD20u);
    ctx->pc = 0x10AD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD18u;
            // 0x10ad1c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD20u; }
        if (ctx->pc != 0x10AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD20u; }
        if (ctx->pc != 0x10AD20u) { return; }
    }
    ctx->pc = 0x10AD20u;
label_10ad20:
    // 0x10ad20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ad24:
    // 0x10ad24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ad28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10ad2c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ad2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ad30: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x10ad30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x10ad34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ad38: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10ad3c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10ad40: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x10AD40u;
    {
        const bool branch_taken_0x10ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD40u;
            // 0x10ad44: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad40) {
            ctx->pc = 0x10AD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ad08;
        }
    }
    ctx->pc = 0x10AD48u;
    // 0x10ad48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD48u;
    {
        const bool branch_taken_0x10ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD48u;
            // 0x10ad4c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad48) {
            ctx->pc = 0x10AD5Cu;
            goto label_10ad5c;
        }
    }
    ctx->pc = 0x10AD50u;
label_10ad50:
    // 0x10ad50: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x10ad50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x10ad54: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x10ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x10ad58: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_10ad5c:
    // 0x10ad5c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x10ad5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x10ad60: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x10ad64: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x10ad64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x10ad68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10ad6c: 0x26650490  addiu       $a1, $s3, 0x490
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x10ad70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ad74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10ad78: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x10ad78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ad7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ad80: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x10AD80u;
    {
        const bool branch_taken_0x10ad80 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD80u;
            // 0x10ad84: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad80) {
            ctx->pc = 0x10ADBCu;
            goto label_10adbc;
        }
    }
    ctx->pc = 0x10AD88u;
    // 0x10ad88: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x10ad88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x10ad8c: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x10ad8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x10ad90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10ad90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad94: 0x0  nop
    ctx->pc = 0x10ad94u;
    // NOP
label_10ad98:
    // 0x10ad98: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10ad98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10ad9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD9Cu;
    {
        const bool branch_taken_0x10ad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ADA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD9Cu;
            // 0x10ada0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad9c) {
            ctx->pc = 0x10ADB0u;
            goto label_10adb0;
        }
    }
    ctx->pc = 0x10ADA4u;
    // 0x10ada4: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x10ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10ada8: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10ADA8u;
    SET_GPR_U32(ctx, 31, 0x10ADB0u);
    ctx->pc = 0x10ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADA8u;
            // 0x10adac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADB0u; }
        if (ctx->pc != 0x10ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADB0u; }
        if (ctx->pc != 0x10ADB0u) { return; }
    }
    ctx->pc = 0x10ADB0u;
label_10adb0:
    // 0x10adb0: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x10adb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10adb4: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10ADB4u;
    {
        const bool branch_taken_0x10adb4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x10ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADB4u;
            // 0x10adb8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adb4) {
            ctx->pc = 0x10AD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ad98;
        }
    }
    ctx->pc = 0x10ADBCu;
label_10adbc:
    // 0x10adbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10adc0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10adc4: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x10adc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x10adc8: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x10adcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10add0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x10add0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10add4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10add4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10add8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ADD8u;
    {
        const bool branch_taken_0x10add8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADD8u;
            // 0x10addc: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10add8) {
            ctx->pc = 0x10ADF0u;
            goto label_10adf0;
        }
    }
    ctx->pc = 0x10ADE0u;
    // 0x10ade0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x10ade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x10ade4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10ade8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10ADE8u;
    {
        const bool branch_taken_0x10ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADE8u;
            // 0x10adec: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ade8) {
            ctx->pc = 0x10ADF4u;
            goto label_10adf4;
        }
    }
    ctx->pc = 0x10ADF0u;
label_10adf0:
    // 0x10adf0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x10adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10adf4:
    // 0x10adf4: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x10adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
    // 0x10adf8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x10adf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10adfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10adfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10ae00: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x10ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x10ae04: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x10ae04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10ae08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10ae0c: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x10ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x10ae10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x10ae10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x10ae14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ae18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10ae18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ae1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ae1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ae20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ae20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ae24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae28: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE28u;
            // 0x10ae2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AE30u;
}
