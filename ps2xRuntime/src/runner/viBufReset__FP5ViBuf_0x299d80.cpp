#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufReset__FP5ViBuf
// Address: 0x299d80 - 0x299ebc
void viBufReset__FP5ViBuf_0x299d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufReset__FP5ViBuf_0x299d80");
#endif

    switch (ctx->pc) {
        case 0x299db8u: goto label_299db8;
        case 0x299e0cu: goto label_299e0c;
        case 0x299e30u: goto label_299e30;
        case 0x299e74u: goto label_299e74;
        case 0x299eacu: goto label_299eac;
        default: break;
    }

    ctx->pc = 0x299d80u;

    // 0x299d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x299d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299d8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d90: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x299d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x299d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d98: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x299d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x299d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299da0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x299da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x299da4: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x299da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x299da8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x299da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x299dac: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x299dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x299db0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x299DB0u;
    {
        const bool branch_taken_0x299db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299DB0u;
            // 0x299db4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299db0) {
            ctx->pc = 0x299DF0u;
            goto label_299df0;
        }
    }
    ctx->pc = 0x299DB8u;
label_299db8:
    // 0x299db8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x299db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x299dbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x299dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x299dc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299dc4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x299dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x299dc8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x299dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x299dcc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299dd0: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x299dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x299dd4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x299dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x299dd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299ddc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x299ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x299de0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x299de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x299de4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299de8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x299de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x299dec: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x299decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_299df0:
    // 0x299df0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x299df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x299df4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x299df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x299df8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x299DF8u;
    {
        const bool branch_taken_0x299df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x299DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299DF8u;
            // 0x299dfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299df8) {
            ctx->pc = 0x299DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299db8;
        }
    }
    ctx->pc = 0x299E00u;
    // 0x299e00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x299e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x299E04u;
    {
        const bool branch_taken_0x299e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299E04u;
            // 0x299e08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e04) {
            ctx->pc = 0x299E3Cu;
            goto label_299e3c;
        }
    }
    ctx->pc = 0x299E0Cu;
label_299e0c:
    // 0x299e0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x299e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299e10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x299e14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x299e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299e18: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x299e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x299e1c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x299e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x299e20: 0x4293c  dsll32      $a1, $a0, 4
    ctx->pc = 0x299e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 4));
    // 0x299e24: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x299e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x299e28: 0xc0a6734  jal         func_299CD0
    ctx->pc = 0x299E28u;
    SET_GPR_U32(ctx, 31, 0x299E30u);
    ctx->pc = 0x299E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299E28u;
            // 0x299e2c: 0x6a2021  addu        $a0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299CD0u;
    if (runtime->hasFunction(0x299CD0u)) {
        auto targetFn = runtime->lookupFunction(0x299CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E30u; }
        if (ctx->pc != 0x299E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2__FP5QWORDPvUiUi_0x299cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E30u; }
        if (ctx->pc != 0x299E30u) { return; }
    }
    ctx->pc = 0x299E30u;
label_299e30:
    // 0x299e30: 0x25290800  addiu       $t1, $t1, 0x800
    ctx->pc = 0x299e30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2048));
    // 0x299e34: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x299e38: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x299e38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_299e3c:
    // 0x299e3c: 0x0  nop
    ctx->pc = 0x299e3cu;
    // NOP
    // 0x299e40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x299e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299e44: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x299e44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x299e48: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x299E48u;
    {
        const bool branch_taken_0x299e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299e48) {
            ctx->pc = 0x299E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299e0c;
        }
    }
    ctx->pc = 0x299E50u;
    // 0x299e50: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x299e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299e54: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x299e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x299e58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x299e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x299e5c: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x299e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x299e60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x299e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299e64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x299e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e68: 0x1042824  and         $a1, $t0, $a0
    ctx->pc = 0x299e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x299e6c: 0xc0a6734  jal         func_299CD0
    ctx->pc = 0x299E6Cu;
    SET_GPR_U32(ctx, 31, 0x299E74u);
    ctx->pc = 0x299E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299E6Cu;
            // 0x299e70: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299CD0u;
    if (runtime->hasFunction(0x299CD0u)) {
        auto targetFn = runtime->lookupFunction(0x299CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E74u; }
        if (ctx->pc != 0x299E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2__FP5QWORDPvUiUi_0x299cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E74u; }
        if (ctx->pc != 0x299E74u) { return; }
    }
    ctx->pc = 0x299E74u;
label_299e74:
    // 0x299e74: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299e78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x299e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299e7c: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x299e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947872), GPR_U32(ctx, 0));
    // 0x299e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299e84: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299e88: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x299e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x299e8c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x299e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x299e90: 0xac23b410  sw          $v1, -0x4BF0($at)
    ctx->pc = 0x299e90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947856), GPR_U32(ctx, 3));
    // 0x299e94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x299e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299e98: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299e9c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x299e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x299ea0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x299ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x299ea4: 0xc0a6718  jal         func_299C60
    ctx->pc = 0x299EA4u;
    SET_GPR_U32(ctx, 31, 0x299EACu);
    ctx->pc = 0x299EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299EA4u;
            // 0x299ea8: 0xac22b430  sw          $v0, -0x4BD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299C60u;
    if (runtime->hasFunction(0x299C60u)) {
        auto targetFn = runtime->lookupFunction(0x299C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299EACu; }
        if (ctx->pc != 0x299EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR__FUi_0x299c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299EACu; }
        if (ctx->pc != 0x299EACu) { return; }
    }
    ctx->pc = 0x299EACu;
label_299eac:
    // 0x299eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x299EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299EB4u;
            // 0x299eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299EBCu;
}
