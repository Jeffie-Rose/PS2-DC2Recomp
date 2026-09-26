#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAppearVlgr__13CVillagerMngrFiiiPiPP18CVillagerPlaceInfo
// Address: 0x2cda60 - 0x2cdd08
void GetAppearVlgr__13CVillagerMngrFiiiPiPP18CVillagerPlaceInfo_0x2cda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAppearVlgr__13CVillagerMngrFiiiPiPP18CVillagerPlaceInfo_0x2cda60");
#endif

    switch (ctx->pc) {
        case 0x2cdab4u: goto label_2cdab4;
        case 0x2cdadcu: goto label_2cdadc;
        case 0x2cdafcu: goto label_2cdafc;
        case 0x2cdb34u: goto label_2cdb34;
        case 0x2cdb50u: goto label_2cdb50;
        case 0x2cdbb4u: goto label_2cdbb4;
        case 0x2cdc6cu: goto label_2cdc6c;
        default: break;
    }

    ctx->pc = 0x2cda60u;

    // 0x2cda60: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2cda60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2cda64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cda64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2cda68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2cda68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2cda6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cda6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2cda70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cda70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2cda74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cda74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cda78: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2cda78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cda7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cda80: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2cda80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cda84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cda88: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2cda88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cda90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cda90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cda94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cda94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cda98: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2cda98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2cda9c: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA9Cu;
    {
        const bool branch_taken_0x2cda9c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x2CDAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA9Cu;
            // 0x2cdaa0: 0xafa600dc  sw          $a2, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda9c) {
            ctx->pc = 0x2CDAACu;
            goto label_2cdaac;
        }
    }
    ctx->pc = 0x2CDAA4u;
    // 0x2cdaa4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2CDAA4u;
    {
        const bool branch_taken_0x2cdaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAA4u;
            // 0x2cdaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdaa4) {
            ctx->pc = 0x2CDCD8u;
            goto label_2cdcd8;
        }
    }
    ctx->pc = 0x2CDAACu;
label_2cdaac:
    // 0x2cdaac: 0xc0c65bc  jal         func_3196F0
    ctx->pc = 0x2CDAACu;
    SET_GPR_U32(ctx, 31, 0x2CDAB4u);
    ctx->pc = 0x2CDAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAACu;
            // 0x2cdab0: 0x27a400fc  addiu       $a0, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3196F0u;
    if (runtime->hasFunction(0x3196F0u)) {
        auto targetFn = runtime->lookupFunction(0x3196F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDAB4u; }
        if (ctx->pc != 0x2CDAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVlgrPlaceTable__FPi_0x3196f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDAB4u; }
        if (ctx->pc != 0x2CDAB4u) { return; }
    }
    ctx->pc = 0x2CDAB4u;
label_2cdab4:
    // 0x2cdab4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2cdab8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cdabc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2cdabcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cdac0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDAC0u;
    {
        const bool branch_taken_0x2cdac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAC0u;
            // 0x2cdac4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdac0) {
            ctx->pc = 0x2CDAD4u;
            goto label_2cdad4;
        }
    }
    ctx->pc = 0x2CDAC8u;
    // 0x2cdac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdacc: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x2cdaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x2cdad0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2cdad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2cdad4:
    // 0x2cdad4: 0xc0c69c0  jal         func_31A700
    ctx->pc = 0x2CDAD4u;
    SET_GPR_U32(ctx, 31, 0x2CDADCu);
    ctx->pc = 0x2CDAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAD4u;
            // 0x2cdad8: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A700u;
    if (runtime->hasFunction(0x31A700u)) {
        auto targetFn = runtime->lookupFunction(0x31A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDADCu; }
        if (ctx->pc != 0x2CDADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressInfo__Fi_0x31a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDADCu; }
        if (ctx->pc != 0x2CDADCu) { return; }
    }
    ctx->pc = 0x2CDADCu;
label_2cdadc:
    // 0x2cdadc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2cdae0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2cdae4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDAE4u;
    {
        const bool branch_taken_0x2cdae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAE4u;
            // 0x2cdae8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdae4) {
            ctx->pc = 0x2CDAF4u;
            goto label_2cdaf4;
        }
    }
    ctx->pc = 0x2CDAECu;
    // 0x2cdaec: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2CDAECu;
    {
        const bool branch_taken_0x2cdaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAECu;
            // 0x2cdaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdaec) {
            ctx->pc = 0x2CDCD8u;
            goto label_2cdcd8;
        }
    }
    ctx->pc = 0x2CDAF4u;
label_2cdaf4:
    // 0x2cdaf4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2CDAF4u;
    {
        const bool branch_taken_0x2cdaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdaf4) {
            ctx->pc = 0x2CDCC8u;
            goto label_2cdcc8;
        }
    }
    ctx->pc = 0x2CDAFCu;
label_2cdafc:
    // 0x2cdafc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdb00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cdb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cdb04: 0x1860006c  blez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2CDB04u;
    {
        const bool branch_taken_0x2cdb04 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2cdb04) {
            ctx->pc = 0x2CDCB8u;
            goto label_2cdcb8;
        }
    }
    ctx->pc = 0x2CDB0Cu;
    // 0x2cdb0c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2cdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdb10: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2CDB10u;
    {
        const bool branch_taken_0x2cdb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB10u;
            // 0x2cdb14: 0x247effff  addiu       $fp, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb10) {
            ctx->pc = 0x2CDCB8u;
            goto label_2cdcb8;
        }
    }
    ctx->pc = 0x2CDB18u;
    // 0x2cdb18: 0x7c00042  bltz        $fp, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CDB18u;
    {
        const bool branch_taken_0x2cdb18 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x2CDB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB18u;
            // 0x2cdb1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb18) {
            ctx->pc = 0x2CDC24u;
            goto label_2cdc24;
        }
    }
    ctx->pc = 0x2CDB20u;
    // 0x2cdb20: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2cdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2cdb24: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x2cdb24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cdb28: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2cdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2cdb2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2cdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cdb30: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2cdb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2cdb34:
    // 0x2cdb34: 0x0  nop
    ctx->pc = 0x2cdb34u;
    // NOP
    // 0x2cdb38: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdb3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdb40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cdb44: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x2cdb44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cdb48: 0xc0c69c0  jal         func_31A700
    ctx->pc = 0x2CDB48u;
    SET_GPR_U32(ctx, 31, 0x2CDB50u);
    ctx->pc = 0x2CDB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB48u;
            // 0x2cdb4c: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A700u;
    if (runtime->hasFunction(0x31A700u)) {
        auto targetFn = runtime->lookupFunction(0x31A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB50u; }
        if (ctx->pc != 0x2CDB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressInfo__Fi_0x31a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB50u; }
        if (ctx->pc != 0x2CDB50u) { return; }
    }
    ctx->pc = 0x2CDB50u;
label_2cdb50:
    // 0x2cdb50: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2CDB50u;
    {
        const bool branch_taken_0x2cdb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb50) {
            ctx->pc = 0x2CDC10u;
            goto label_2cdc10;
        }
    }
    ctx->pc = 0x2CDB58u;
    // 0x2cdb58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdb5c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2cdb60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2cdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdb64: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2cdb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cdb68: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CDB68u;
    {
        const bool branch_taken_0x2cdb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb68) {
            ctx->pc = 0x2CDC10u;
            goto label_2cdc10;
        }
    }
    ctx->pc = 0x2CDB70u;
    // 0x2cdb70: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2cdb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2cdb74: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2cdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cdb78: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDB78u;
    {
        const bool branch_taken_0x2cdb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cdb78) {
            ctx->pc = 0x2CDB94u;
            goto label_2cdb94;
        }
    }
    ctx->pc = 0x2CDB80u;
    // 0x2cdb80: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x2cdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2cdb84: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CDB84u;
    {
        const bool branch_taken_0x2cdb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB84u;
            // 0x2cdb88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb84) {
            ctx->pc = 0x2CDC24u;
            goto label_2cdc24;
        }
    }
    ctx->pc = 0x2CDB8Cu;
    // 0x2cdb8c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CDB8Cu;
    {
        const bool branch_taken_0x2cdb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cdb8c) {
            ctx->pc = 0x2CDC24u;
            goto label_2cdc24;
        }
    }
    ctx->pc = 0x2CDB94u;
label_2cdb94:
    // 0x2cdb94: 0x0  nop
    ctx->pc = 0x2cdb94u;
    // NOP
    // 0x2cdb98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cdb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cdb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cdba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdba4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cdba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdba8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2cdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2cdbac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cdbb0: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x2cdbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2cdbb4:
    // 0x2cdbb4: 0x0  nop
    ctx->pc = 0x2cdbb4u;
    // NOP
    // 0x2cdbb8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2cdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cdbbc: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x2cdbbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cdbc0: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CDBC0u;
    {
        const bool branch_taken_0x2cdbc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdbc0) {
            ctx->pc = 0x2CDBF8u;
            goto label_2cdbf8;
        }
    }
    ctx->pc = 0x2CDBC8u;
    // 0x2cdbc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cdbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdbcc: 0x6a0000a  bltz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2CDBCCu;
    {
        const bool branch_taken_0x2cdbcc = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2CDBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDBCCu;
            // 0x2cdbd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbcc) {
            ctx->pc = 0x2CDBF8u;
            goto label_2cdbf8;
        }
    }
    ctx->pc = 0x2CDBD4u;
    // 0x2cdbd4: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2cdbd8: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDBD8u;
    {
        const bool branch_taken_0x2cdbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2CDBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDBD8u;
            // 0x2cdbdc: 0x2c81821  addu        $v1, $s6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbd8) {
            ctx->pc = 0x2CDBF8u;
            goto label_2cdbf8;
        }
    }
    ctx->pc = 0x2CDBE0u;
    // 0x2cdbe0: 0x2881021  addu        $v0, $s4, $t0
    ctx->pc = 0x2cdbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x2cdbe4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2cdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x2cdbe8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2cdbec: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2cdbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2cdbf0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2cdbf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cdbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cdbf8:
    // 0x2cdbf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cdbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cdbfc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2cdbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cdc00: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2CDC00u;
    {
        const bool branch_taken_0x2cdc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC00u;
            // 0x2cdc04: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc00) {
            ctx->pc = 0x2CDBB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdbb4;
        }
    }
    ctx->pc = 0x2CDC08u;
    // 0x2cdc08: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDC08u;
    {
        const bool branch_taken_0x2cdc08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc08) {
            ctx->pc = 0x2CDC24u;
            goto label_2cdc24;
        }
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2cdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cdc14: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x2cdc14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2cdc18: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x2cdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x2cdc1c: 0x7c1ffc5  bgez        $fp, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2CDC1Cu;
    {
        const bool branch_taken_0x2cdc1c = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x2CDC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC1Cu;
            // 0x2cdc20: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc1c) {
            ctx->pc = 0x2CDB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CDC24u;
label_2cdc24:
    // 0x2cdc24: 0x0  nop
    ctx->pc = 0x2cdc24u;
    // NOP
    // 0x2cdc28: 0x16400023  bnez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CDC28u;
    {
        const bool branch_taken_0x2cdc28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc28) {
            ctx->pc = 0x2CDCB8u;
            goto label_2cdcb8;
        }
    }
    ctx->pc = 0x2CDC30u;
    // 0x2cdc30: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdc34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cdc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cdc38: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CDC38u;
    {
        const bool branch_taken_0x2cdc38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cdc38) {
            ctx->pc = 0x2CDCB8u;
            goto label_2cdcb8;
        }
    }
    ctx->pc = 0x2CDC40u;
    // 0x2cdc40: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdc44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdc48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cdc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cdc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdc50: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CDC50u;
    {
        const bool branch_taken_0x2cdc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC50u;
            // 0x2cdc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc50) {
            ctx->pc = 0x2CDCB8u;
            goto label_2cdcb8;
        }
    }
    ctx->pc = 0x2CDC58u;
    // 0x2cdc58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cdc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc5c: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x2cdc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cdc60: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2cdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2cdc64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cdc68: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2cdc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2cdc6c:
    // 0x2cdc6c: 0x0  nop
    ctx->pc = 0x2cdc6cu;
    // NOP
    // 0x2cdc70: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2cdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2cdc74: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cdc78: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDC78u;
    {
        const bool branch_taken_0x2cdc78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc78) {
            ctx->pc = 0x2CDCA8u;
            goto label_2cdca8;
        }
    }
    ctx->pc = 0x2CDC80u;
    // 0x2cdc80: 0x6a00009  bltz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDC80u;
    {
        const bool branch_taken_0x2cdc80 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2cdc80) {
            ctx->pc = 0x2CDCA8u;
            goto label_2cdca8;
        }
    }
    ctx->pc = 0x2CDC88u;
    // 0x2cdc88: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x2cdc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2cdc8c: 0x14550006  bne         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDC8Cu;
    {
        const bool branch_taken_0x2cdc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2CDC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC8Cu;
            // 0x2cdc90: 0x2c71821  addu        $v1, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc8c) {
            ctx->pc = 0x2CDCA8u;
            goto label_2cdca8;
        }
    }
    ctx->pc = 0x2CDC94u;
    // 0x2cdc94: 0x2871021  addu        $v0, $s4, $a3
    ctx->pc = 0x2cdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2cdc98: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2cdc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2cdc9c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2cdc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2cdca0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2cdca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2cdca4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cdca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cdca8:
    // 0x2cdca8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cdca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cdcac: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2cdcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cdcb0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CDCB0u;
    {
        const bool branch_taken_0x2cdcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDCB0u;
            // 0x2cdcb4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcb0) {
            ctx->pc = 0x2CDC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdc6c;
        }
    }
    ctx->pc = 0x2CDCB8u;
label_2cdcb8:
    // 0x2cdcb8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdcbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cdcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cdcc0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2cdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2cdcc4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2cdcc8:
    // 0x2cdcc8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2cdccc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2cdcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cdcd0: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x2CDCD0u;
    {
        const bool branch_taken_0x2cdcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDCD0u;
            // 0x2cdcd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcd0) {
            ctx->pc = 0x2CDAFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdafc;
        }
    }
    ctx->pc = 0x2CDCD8u;
label_2cdcd8:
    // 0x2cdcd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cdcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cdcdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2cdcdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cdce0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cdce0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cdce4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cdce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cdce8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cdce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cdcec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cdcecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdcf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cdcf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdcf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cdcf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdcf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cdcf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdcfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cdcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdd00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD00u;
            // 0x2cdd04: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDD08u;
}
