#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_SND_ID__FP12RS_STACKDATAi
// Address: 0x272950 - 0x272a40
void ps2__GET_SND_ID__FP12RS_STACKDATAi_0x272950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_SND_ID__FP12RS_STACKDATAi_0x272950");
#endif

    switch (ctx->pc) {
        case 0x272988u: goto label_272988;
        case 0x2729fcu: goto label_2729fc;
        case 0x272a0cu: goto label_272a0c;
        case 0x272a24u: goto label_272a24;
        default: break;
    }

    ctx->pc = 0x272950u;

    // 0x272950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x272958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27295c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27295cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x272960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272964: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x272964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x272968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27296c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27296Cu;
    {
        const bool branch_taken_0x27296c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x272970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27296Cu;
            // 0x272970: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27296c) {
            ctx->pc = 0x272980u;
            goto label_272980;
        }
    }
    ctx->pc = 0x272974u;
    // 0x272974: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x272974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x272978: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x272978u;
    {
        const bool branch_taken_0x272978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27297Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272978u;
            // 0x27297c: 0x8c25e554  lw          $a1, -0x1AAC($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272978) {
            ctx->pc = 0x272A1Cu;
            goto label_272a1c;
        }
    }
    ctx->pc = 0x272980u;
label_272980:
    // 0x272980: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272980u;
    SET_GPR_U32(ctx, 31, 0x272988u);
    ctx->pc = 0x272984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272980u;
            // 0x272984: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272988u; }
        if (ctx->pc != 0x272988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272988u; }
        if (ctx->pc != 0x272988u) { return; }
    }
    ctx->pc = 0x272988u;
label_272988:
    // 0x272988: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x272988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27298c: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x27298Cu;
    {
        const bool branch_taken_0x27298c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x272990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27298Cu;
            // 0x272990: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27298c) {
            ctx->pc = 0x272A14u;
            goto label_272a14;
        }
    }
    ctx->pc = 0x272994u;
    // 0x272994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x272994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x272998: 0x2463ca60  addiu       $v1, $v1, -0x35A0
    ctx->pc = 0x272998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
    // 0x27299c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2729a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2729a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2729a4: 0x400008  jr          $v0
    ctx->pc = 0x2729A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2729ACu: goto label_2729ac;
            case 0x2729C0u: goto label_2729c0;
            case 0x2729D4u: goto label_2729d4;
            case 0x2729E8u: goto label_2729e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2729ACu;
label_2729ac:
    // 0x2729ac: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2729acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2729b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2729b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2729b4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2729b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2729b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2729B8u;
    {
        const bool branch_taken_0x2729b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729B8u;
            // 0x2729bc: 0x8c25a040  lw          $a1, -0x5FC0($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729b8) {
            ctx->pc = 0x272A1Cu;
            goto label_272a1c;
        }
    }
    ctx->pc = 0x2729C0u;
label_2729c0:
    // 0x2729c0: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2729c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2729c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2729c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2729c8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2729c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2729cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2729CCu;
    {
        const bool branch_taken_0x2729cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729CCu;
            // 0x2729d0: 0x8c25a498  lw          $a1, -0x5B68($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729cc) {
            ctx->pc = 0x272A1Cu;
            goto label_272a1c;
        }
    }
    ctx->pc = 0x2729D4u;
label_2729d4:
    // 0x2729d4: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2729d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2729d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2729d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2729dc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2729dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2729e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2729E0u;
    {
        const bool branch_taken_0x2729e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729E0u;
            // 0x2729e4: 0x8c25c4d0  lw          $a1, -0x3B30($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729e0) {
            ctx->pc = 0x272A1Cu;
            goto label_272a1c;
        }
    }
    ctx->pc = 0x2729E8u;
label_2729e8:
    // 0x2729e8: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x2729e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2729ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2729ECu;
    {
        const bool branch_taken_0x2729ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2729F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729ECu;
            // 0x2729f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729ec) {
            ctx->pc = 0x272A00u;
            goto label_272a00;
        }
    }
    ctx->pc = 0x2729F4u;
    // 0x2729f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2729F4u;
    SET_GPR_U32(ctx, 31, 0x2729FCu);
    ctx->pc = 0x2729F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2729F4u;
            // 0x2729f8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2729FCu; }
        if (ctx->pc != 0x2729FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2729FCu; }
        if (ctx->pc != 0x2729FCu) { return; }
    }
    ctx->pc = 0x2729FCu;
label_2729fc:
    // 0x2729fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2729fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272a00:
    // 0x272a00: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x272a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x272a04: 0xc0a9a3c  jal         func_2A68F0
    ctx->pc = 0x272A04u;
    SET_GPR_U32(ctx, 31, 0x272A0Cu);
    ctx->pc = 0x272A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272A04u;
            // 0x272a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A68F0u;
    if (runtime->hasFunction(0x2A68F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A0Cu; }
        if (ctx->pc != 0x272A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcID__6CSceneFi_0x2a68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A0Cu; }
        if (ctx->pc != 0x272A0Cu) { return; }
    }
    ctx->pc = 0x272A0Cu;
label_272a0c:
    // 0x272a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272A0Cu;
    {
        const bool branch_taken_0x272a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A0Cu;
            // 0x272a10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a0c) {
            ctx->pc = 0x272A1Cu;
            goto label_272a1c;
        }
    }
    ctx->pc = 0x272A14u;
label_272a14:
    // 0x272a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272A14u;
    {
        const bool branch_taken_0x272a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A14u;
            // 0x272a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a14) {
            ctx->pc = 0x272A28u;
            goto label_272a28;
        }
    }
    ctx->pc = 0x272A1Cu;
label_272a1c:
    // 0x272a1c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x272A1Cu;
    SET_GPR_U32(ctx, 31, 0x272A24u);
    ctx->pc = 0x272A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272A1Cu;
            // 0x272a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A24u; }
        if (ctx->pc != 0x272A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A24u; }
        if (ctx->pc != 0x272A24u) { return; }
    }
    ctx->pc = 0x272A24u;
label_272a24:
    // 0x272a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272a28:
    // 0x272a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x272a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272a38: 0x3e00008  jr          $ra
    ctx->pc = 0x272A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A38u;
            // 0x272a3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272A40u;
}
