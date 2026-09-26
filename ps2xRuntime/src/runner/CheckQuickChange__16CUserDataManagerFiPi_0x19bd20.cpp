#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckQuickChange__16CUserDataManagerFiPi
// Address: 0x19bd20 - 0x19bef4
void CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckQuickChange__16CUserDataManagerFiPi_0x19bd20");
#endif

    switch (ctx->pc) {
        case 0x19bd60u: goto label_19bd60;
        case 0x19bd84u: goto label_19bd84;
        case 0x19bdb4u: goto label_19bdb4;
        case 0x19bddcu: goto label_19bddc;
        case 0x19bde8u: goto label_19bde8;
        case 0x19be60u: goto label_19be60;
        case 0x19be70u: goto label_19be70;
        case 0x19bea0u: goto label_19bea0;
        default: break;
    }

    ctx->pc = 0x19bd20u;

    // 0x19bd20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19bd24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19bd28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19bd2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19bd30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19bd34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19bd38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19bd3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19bd3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19bd44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19bd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bd4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19bd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bd54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd58: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x19BD58u;
    SET_GPR_U32(ctx, 31, 0x19BD60u);
    ctx->pc = 0x19BD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD58u;
            // 0x19bd5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD60u; }
        if (ctx->pc != 0x19BD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD60u; }
        if (ctx->pc != 0x19BD60u) { return; }
    }
    ctx->pc = 0x19BD60u;
label_19bd60:
    // 0x19bd60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd64: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x19bd68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19bd6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BD6Cu;
    {
        const bool branch_taken_0x19bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD6Cu;
            // 0x19bd70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd6c) {
            ctx->pc = 0x19BD78u;
            goto label_19bd78;
        }
    }
    ctx->pc = 0x19BD74u;
    // 0x19bd74: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x19bd74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_19bd78:
    // 0x19bd78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd7c: 0xc066ed0  jal         func_19BB40
    ctx->pc = 0x19BD7Cu;
    SET_GPR_U32(ctx, 31, 0x19BD84u);
    ctx->pc = 0x19BD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD7Cu;
            // 0x19bd80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB40u;
    if (runtime->hasFunction(0x19BB40u)) {
        auto targetFn = runtime->lookupFunction(0x19BB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD84u; }
        if (ctx->pc != 0x19BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableCharaChange__16CUserDataManagerFiPi_0x19bb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD84u; }
        if (ctx->pc != 0x19BD84u) { return; }
    }
    ctx->pc = 0x19BD84u;
label_19bd84:
    // 0x19bd84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19bd84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd88: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BD88u;
    {
        const bool branch_taken_0x19bd88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD88u;
            // 0x19bd8c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd88) {
            ctx->pc = 0x19BD98u;
            goto label_19bd98;
        }
    }
    ctx->pc = 0x19BD90u;
    // 0x19bd90: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x19bd90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x19bd94: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19bd94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bd98:
    // 0x19bd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bd9c: 0x1642003c  bne         $s2, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19BD9Cu;
    {
        const bool branch_taken_0x19bd9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD9Cu;
            // 0x19bda0: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd9c) {
            ctx->pc = 0x19BE90u;
            goto label_19be90;
        }
    }
    ctx->pc = 0x19BDA4u;
    // 0x19bda4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bda8: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x19bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x19bdac: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x19BDACu;
    SET_GPR_U32(ctx, 31, 0x19BDB4u);
    ctx->pc = 0x19BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDACu;
            // 0x19bdb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDB4u; }
        if (ctx->pc != 0x19BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDB4u; }
        if (ctx->pc != 0x19BDB4u) { return; }
    }
    ctx->pc = 0x19BDB4u;
label_19bdb4:
    // 0x19bdb4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x19bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x19bdb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19bdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdbc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x19bdc0: 0x26b34eb0  addiu       $s3, $s5, 0x4EB0
    ctx->pc = 0x19bdc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 20144));
    // 0x19bdc4: 0x34424d98  ori         $v0, $v0, 0x4D98
    ctx->pc = 0x19bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19864);
    // 0x19bdc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19bdc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdcc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19bdd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19bdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdd4: 0x845e0000  lh          $fp, 0x0($v0)
    ctx->pc = 0x19bdd4u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bdd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19bdd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bddc:
    // 0x19bddc: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x19bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19bde0: 0xc066b4c  jal         func_19AD30
    ctx->pc = 0x19BDE0u;
    SET_GPR_U32(ctx, 31, 0x19BDE8u);
    ctx->pc = 0x19BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDE0u;
            // 0x19bde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AD30u;
    if (runtime->hasFunction(0x19AD30u)) {
        auto targetFn = runtime->lookupFunction(0x19AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDE8u; }
        if (ctx->pc != 0x19BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsChange__11CMonsterBoxFi_0x19ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDE8u; }
        if (ctx->pc != 0x19BDE8u) { return; }
    }
    ctx->pc = 0x19BDE8u;
label_19bde8:
    // 0x19bde8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19BDE8u;
    {
        const bool branch_taken_0x19bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDE8u;
            // 0x19bdec: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bde8) {
            ctx->pc = 0x19BE14u;
            goto label_19be14;
        }
    }
    ctx->pc = 0x19BDF0u;
    // 0x19bdf0: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19bdf4: 0x84224d98  lh          $v0, 0x4D98($at)
    ctx->pc = 0x19bdf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x19bdf8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BDF8u;
    {
        const bool branch_taken_0x19bdf8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDF8u;
            // 0x19bdfc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdf8) {
            ctx->pc = 0x19BE14u;
            goto label_19be14;
        }
    }
    ctx->pc = 0x19BE00u;
    // 0x19be00: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x19be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x19be04: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19be04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19be08: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x19be08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19be0c: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19be10: 0xa4224d98  sh          $v0, 0x4D98($at)
    ctx->pc = 0x19be10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19864), (uint16_t)GPR_U32(ctx, 2));
label_19be14:
    // 0x19be14: 0x0  nop
    ctx->pc = 0x19be14u;
    // NOP
    // 0x19be18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19be18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19be1c: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x19be1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19be20: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19BE20u;
    {
        const bool branch_taken_0x19be20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE20u;
            // 0x19be24: 0x269400bc  addiu       $s4, $s4, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be20) {
            ctx->pc = 0x19BDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19bddc;
        }
    }
    ctx->pc = 0x19BE28u;
    // 0x19be28: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x19be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19be2c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BE2Cu;
    {
        const bool branch_taken_0x19be2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE2Cu;
            // 0x19be30: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be2c) {
            ctx->pc = 0x19BE8Cu;
            goto label_19be8c;
        }
    }
    ctx->pc = 0x19BE34u;
    // 0x19be34: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x19BE34u;
    {
        const bool branch_taken_0x19be34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be34) {
            ctx->pc = 0x19BE8Cu;
            goto label_19be8c;
        }
    }
    ctx->pc = 0x19BE3Cu;
    // 0x19be3c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BE3Cu;
    {
        const bool branch_taken_0x19be3c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE3Cu;
            // 0x19be40: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be3c) {
            ctx->pc = 0x19BE54u;
            goto label_19be54;
        }
    }
    ctx->pc = 0x19BE44u;
    // 0x19be44: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE44u;
    {
        const bool branch_taken_0x19be44 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE44u;
            // 0x19be48: 0x36100002  ori         $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be44) {
            ctx->pc = 0x19BE54u;
            goto label_19be54;
        }
    }
    ctx->pc = 0x19BE4Cu;
    // 0x19be4c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19be50: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x19be50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_19be54:
    // 0x19be54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be58: 0xc066b20  jal         func_19AC80
    ctx->pc = 0x19BE58u;
    SET_GPR_U32(ctx, 31, 0x19BE60u);
    ctx->pc = 0x19BE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE58u;
            // 0x19be5c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC80u;
    if (runtime->hasFunction(0x19AC80u)) {
        auto targetFn = runtime->lookupFunction(0x19AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE60u; }
        if (ctx->pc != 0x19BE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataByMonsterID__11CMonsterBoxFi_0x19ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE60u; }
        if (ctx->pc != 0x19BE60u) { return; }
    }
    ctx->pc = 0x19BE60u;
label_19be60:
    // 0x19be60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19BE60u;
    {
        const bool branch_taken_0x19be60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE60u;
            // 0x19be64: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be60) {
            ctx->pc = 0x19BE8Cu;
            goto label_19be8c;
        }
    }
    ctx->pc = 0x19BE68u;
    // 0x19be68: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x19BE68u;
    SET_GPR_U32(ctx, 31, 0x19BE70u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE70u; }
        if (ctx->pc != 0x19BE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE70u; }
        if (ctx->pc != 0x19BE70u) { return; }
    }
    ctx->pc = 0x19BE70u;
label_19be70:
    // 0x19be70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19be70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19be74: 0x0  nop
    ctx->pc = 0x19be74u;
    // NOP
    // 0x19be78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19be78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19be7c: 0x0  nop
    ctx->pc = 0x19be7cu;
    // NOP
    // 0x19be80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19BE80u;
    {
        const bool branch_taken_0x19be80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19BE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE80u;
            // 0x19be84: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be80) {
            ctx->pc = 0x19BE8Cu;
            goto label_19be8c;
        }
    }
    ctx->pc = 0x19BE88u;
    // 0x19be88: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_19be8c:
    // 0x19be8c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19be8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19be90:
    // 0x19be90: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19be90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19be94: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x19be94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x19be98: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x19BE98u;
    SET_GPR_U32(ctx, 31, 0x19BEA0u);
    ctx->pc = 0x19BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE98u;
            // 0x19be9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEA0u; }
        if (ctx->pc != 0x19BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEA0u; }
        if (ctx->pc != 0x19BEA0u) { return; }
    }
    ctx->pc = 0x19BEA0u;
label_19bea0:
    // 0x19bea0: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x19bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19bea4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BEA4u;
    {
        const bool branch_taken_0x19bea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bea4) {
            ctx->pc = 0x19BEB8u;
            goto label_19beb8;
        }
    }
    ctx->pc = 0x19BEACu;
    // 0x19beac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19beb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BEB0u;
    {
        const bool branch_taken_0x19beb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEB0u;
            // 0x19beb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19beb0) {
            ctx->pc = 0x19BEC4u;
            goto label_19bec4;
        }
    }
    ctx->pc = 0x19BEB8u;
label_19beb8:
    // 0x19beb8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19bebc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x19bebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x19bec0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19bec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bec4:
    // 0x19bec4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19bec8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19bec8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19becc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19beccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19bed0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19bed4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19bed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19bed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bedc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19bedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19beec: 0x3e00008  jr          $ra
    ctx->pc = 0x19BEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEECu;
            // 0x19bef0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BEF4u;
}
