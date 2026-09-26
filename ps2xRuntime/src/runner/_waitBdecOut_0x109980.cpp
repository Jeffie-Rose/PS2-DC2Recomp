#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _waitBdecOut
// Address: 0x109980 - 0x109b70
void _waitBdecOut_0x109980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitBdecOut_0x109980");
#endif

    switch (ctx->pc) {
        case 0x1099b0u: goto label_1099b0;
        case 0x109a00u: goto label_109a00;
        case 0x109a28u: goto label_109a28;
        case 0x109ab4u: goto label_109ab4;
        case 0x109accu: goto label_109acc;
        case 0x109aecu: goto label_109aec;
        case 0x109af4u: goto label_109af4;
        case 0x109b38u: goto label_109b38;
        default: break;
    }

    ctx->pc = 0x109980u;

    // 0x109980: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x109980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x109984: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x109984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x109988: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x109988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10998c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x10998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x109990: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x109990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x109994: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x109994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x109998: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x109998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10999c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x10999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1099a0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1099a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1099a4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1099a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1099a8: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x1099A8u;
    SET_GPR_U32(ctx, 31, 0x1099B0u);
    ctx->pc = 0x1099ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1099A8u;
            // 0x1099ac: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1099B0u; }
        if (ctx->pc != 0x1099B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1099B0u; }
        if (ctx->pc != 0x1099B0u) { return; }
    }
    ctx->pc = 0x1099B0u;
label_1099b0:
    // 0x1099b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1099b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1099b4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1099b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1099b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1099bc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1099BCu;
    {
        const bool branch_taken_0x1099bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1099BCu;
            // 0x1099c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099bc) {
            ctx->pc = 0x109A44u;
            goto label_109a44;
        }
    }
    ctx->pc = 0x1099C4u;
    // 0x1099c4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1099c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1099c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1099c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1099cc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1099ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1099d0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1099D0u;
    {
        const bool branch_taken_0x1099d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1099D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1099D0u;
            // 0x1099d4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099d0) {
            ctx->pc = 0x109A48u;
            goto label_109a48;
        }
    }
    ctx->pc = 0x1099D8u;
    // 0x1099d8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x1099d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x1099dc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1099dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1099e0: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1099e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1099e4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1099e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x1099e8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x1099e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x1099ec: 0x3652b400  ori         $s2, $s2, 0xB400
    ctx->pc = 0x1099ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)46080);
    // 0x1099f0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1099f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1099f4: 0x3631b020  ori         $s1, $s1, 0xB020
    ctx->pc = 0x1099f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45088);
    // 0x1099f8: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x1099f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x1099fc: 0x0  nop
    ctx->pc = 0x1099fcu;
    // NOP
label_109a00:
    // 0x109a00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x109a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109a04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109A04u;
    {
        const bool branch_taken_0x109a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109a04) {
            ctx->pc = 0x109A28u;
            goto label_109a28;
        }
    }
    ctx->pc = 0x109A0Cu;
    // 0x109a0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x109a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x109a10: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x109a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x109a14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109A14u;
    {
        const bool branch_taken_0x109a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A14u;
            // 0x109a18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a14) {
            ctx->pc = 0x109A28u;
            goto label_109a28;
        }
    }
    ctx->pc = 0x109A1Cu;
    // 0x109a1c: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x109a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x109a20: 0xc04394a  jal         func_10E528
    ctx->pc = 0x109A20u;
    SET_GPR_U32(ctx, 31, 0x109A28u);
    ctx->pc = 0x109A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109A20u;
            // 0x109a24: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109A28u; }
        if (ctx->pc != 0x109A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109A28u; }
        if (ctx->pc != 0x109A28u) { return; }
    }
    ctx->pc = 0x109A28u;
label_109a28:
    // 0x109a28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x109a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x109a2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109A2Cu;
    {
        const bool branch_taken_0x109a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A2Cu;
            // 0x109a30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a2c) {
            ctx->pc = 0x109A48u;
            goto label_109a48;
        }
    }
    ctx->pc = 0x109A34u;
    // 0x109a34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x109a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109a38: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x109a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x109a3c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x109A3Cu;
    {
        const bool branch_taken_0x109a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a3c) {
            ctx->pc = 0x109A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109a00;
        }
    }
    ctx->pc = 0x109A44u;
label_109a44:
    // 0x109a44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_109a48:
    // 0x109a48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109a4c: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x109a4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x109a50: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x109a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x109a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109a58: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x109a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x109a5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x109a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x109a60: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109A60u;
    {
        const bool branch_taken_0x109a60 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x109A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A60u;
            // 0x109a64: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a60) {
            ctx->pc = 0x109A84u;
            goto label_109a84;
        }
    }
    ctx->pc = 0x109A68u;
    // 0x109a68: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x109a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x109a6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109A6Cu;
    {
        const bool branch_taken_0x109a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A6Cu;
            // 0x109a70: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a6c) {
            ctx->pc = 0x109A7Cu;
            goto label_109a7c;
        }
    }
    ctx->pc = 0x109A74u;
    // 0x109a74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109A74u;
    {
        const bool branch_taken_0x109a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A74u;
            // 0x109a78: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a74) {
            ctx->pc = 0x109A88u;
            goto label_109a88;
        }
    }
    ctx->pc = 0x109A7Cu;
label_109a7c:
    // 0x109a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109A7Cu;
    {
        const bool branch_taken_0x109a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A7Cu;
            // 0x109a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a7c) {
            ctx->pc = 0x109A88u;
            goto label_109a88;
        }
    }
    ctx->pc = 0x109A84u;
label_109a84:
    // 0x109a84: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x109a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_109a88:
    // 0x109a88: 0xae62083c  sw          $v0, 0x83C($s3)
    ctx->pc = 0x109a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2108), GPR_U32(ctx, 2));
    // 0x109a8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109a90: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x109a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x109a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109a98: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x109a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x109a9c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x109A9Cu;
    {
        const bool branch_taken_0x109a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A9Cu;
            // 0x109aa0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a9c) {
            ctx->pc = 0x109B44u;
            goto label_109b44;
        }
    }
    ctx->pc = 0x109AA4u;
    // 0x109aa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109aa8: 0x24a50608  addiu       $a1, $a1, 0x608
    ctx->pc = 0x109aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1544));
    // 0x109aac: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x109AACu;
    SET_GPR_U32(ctx, 31, 0x109AB4u);
    ctx->pc = 0x109AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109AACu;
            // 0x109ab0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AB4u; }
        if (ctx->pc != 0x109AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AB4u; }
        if (ctx->pc != 0x109AB4u) { return; }
    }
    ctx->pc = 0x109AB4u;
label_109ab4:
    // 0x109ab4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x109ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x109ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109abc: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x109abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x109ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ac4: 0xc04394a  jal         func_10E528
    ctx->pc = 0x109AC4u;
    SET_GPR_U32(ctx, 31, 0x109ACCu);
    ctx->pc = 0x109AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109AC4u;
            // 0x109ac8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109ACCu; }
        if (ctx->pc != 0x109ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109ACCu; }
        if (ctx->pc != 0x109ACCu) { return; }
    }
    ctx->pc = 0x109ACCu;
label_109acc:
    // 0x109acc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x109accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x109ad0: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x109ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x109ad4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x109ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x109ad8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x109ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3));
    // 0x109adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109ae0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x109ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x109ae4: 0xc04394a  jal         func_10E528
    ctx->pc = 0x109AE4u;
    SET_GPR_U32(ctx, 31, 0x109AECu);
    ctx->pc = 0x109AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109AE4u;
            // 0x109ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AECu; }
        if (ctx->pc != 0x109AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AECu; }
        if (ctx->pc != 0x109AECu) { return; }
    }
    ctx->pc = 0x109AECu;
label_109aec:
    // 0x109aec: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x109AECu;
    SET_GPR_U32(ctx, 31, 0x109AF4u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AF4u; }
        if (ctx->pc != 0x109AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AF4u; }
        if (ctx->pc != 0x109AF4u) { return; }
    }
    ctx->pc = 0x109AF4u;
label_109af4:
    // 0x109af4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109af8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x109af8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x109afc: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x109afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x109b00: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x109b00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x109b04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x109b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109b08: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x109b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x109b0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109b10: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x109b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x109b14: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x109b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x109b18: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x109b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x109b1c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x109b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x109b20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x109b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x109b24: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x109b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x109b28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x109b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109b2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x109b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x109b30: 0xc04630a  jal         func_118C28
    ctx->pc = 0x109B30u;
    SET_GPR_U32(ctx, 31, 0x109B38u);
    ctx->pc = 0x109B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109B30u;
            // 0x109b34: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B38u; }
        if (ctx->pc != 0x109B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B38u; }
        if (ctx->pc != 0x109B38u) { return; }
    }
    ctx->pc = 0x109B38u;
label_109b38:
    // 0x109b38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109b3c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x109b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x109b40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x109b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_109b44:
    // 0x109b44: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x109b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b48: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x109b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x109b4c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x109b4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109b50: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x109b50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109b54: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x109b54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109b58: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x109b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109b5c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x109b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109b60: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x109b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109b64: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x109b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109b68: 0x3e00008  jr          $ra
    ctx->pc = 0x109B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B68u;
            // 0x109b6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109B70u;
}
