#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataAttach__13CGameDataUsedFi
// Address: 0x199b80 - 0x199c88
void CopyDataAttach__13CGameDataUsedFi_0x199b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataAttach__13CGameDataUsedFi_0x199b80");
#endif

    switch (ctx->pc) {
        case 0x199ba8u: goto label_199ba8;
        case 0x199bd0u: goto label_199bd0;
        case 0x199be4u: goto label_199be4;
        case 0x199c00u: goto label_199c00;
        default: break;
    }

    ctx->pc = 0x199b80u;

    // 0x199b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199b84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199b88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199b90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x199b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199b9c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x199b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x199ba0: 0xc065650  jal         func_195940
    ctx->pc = 0x199BA0u;
    SET_GPR_U32(ctx, 31, 0x199BA8u);
    ctx->pc = 0x199BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BA0u;
            // 0x199ba4: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195940u;
    if (runtime->hasFunction(0x195940u)) {
        auto targetFn = runtime->lookupFunction(0x195940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BA8u; }
        if (ctx->pc != 0x199BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttachData__9CGameDataFi_0x195940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BA8u; }
        if (ctx->pc != 0x199BA8u) { return; }
    }
    ctx->pc = 0x199BA8u;
label_199ba8:
    // 0x199ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bac: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199BACu;
    {
        const bool branch_taken_0x199bac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BACu;
            // 0x199bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bac) {
            ctx->pc = 0x199BBCu;
            goto label_199bbc;
        }
    }
    ctx->pc = 0x199BB4u;
    // 0x199bb4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x199BB4u;
    {
        const bool branch_taken_0x199bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BB4u;
            // 0x199bb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bb4) {
            ctx->pc = 0x199C74u;
            goto label_199c74;
        }
    }
    ctx->pc = 0x199BBCu;
label_199bbc:
    // 0x199bbc: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x199bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x199bc0: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x199BC0u;
    {
        const bool branch_taken_0x199bc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x199BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BC0u;
            // 0x199bc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bc0) {
            ctx->pc = 0x199BF0u;
            goto label_199bf0;
        }
    }
    ctx->pc = 0x199BC8u;
    // 0x199bc8: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x199BC8u;
    SET_GPR_U32(ctx, 31, 0x199BD0u);
    ctx->pc = 0x199BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BC8u;
            // 0x199bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BD0u; }
        if (ctx->pc != 0x199BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BD0u; }
        if (ctx->pc != 0x199BD0u) { return; }
    }
    ctx->pc = 0x199BD0u;
label_199bd0:
    // 0x199bd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199BD0u;
    {
        const bool branch_taken_0x199bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BD0u;
            // 0x199bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bd0) {
            ctx->pc = 0x199BECu;
            goto label_199bec;
        }
    }
    ctx->pc = 0x199BD8u;
    // 0x199bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bdc: 0xc065cdc  jal         func_197370
    ctx->pc = 0x199BDCu;
    SET_GPR_U32(ctx, 31, 0x199BE4u);
    ctx->pc = 0x199BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BDCu;
            // 0x199be0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BE4u; }
        if (ctx->pc != 0x199BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BE4u; }
        if (ctx->pc != 0x199BE4u) { return; }
    }
    ctx->pc = 0x199BE4u;
label_199be4:
    // 0x199be4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x199BE4u;
    {
        const bool branch_taken_0x199be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199BE4u;
            // 0x199be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199be4) {
            ctx->pc = 0x199C70u;
            goto label_199c70;
        }
    }
    ctx->pc = 0x199BECu;
label_199bec:
    // 0x199bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199bf0:
    // 0x199bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bf4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x199bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199bf8: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x199BF8u;
    SET_GPR_U32(ctx, 31, 0x199C00u);
    ctx->pc = 0x199BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BF8u;
            // 0x199bfc: 0xa6320002  sh          $s2, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C00u; }
        if (ctx->pc != 0x199C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C00u; }
        if (ctx->pc != 0x199C00u) { return; }
    }
    ctx->pc = 0x199C00u;
label_199c00:
    // 0x199c00: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x199c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x199c04: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x199c04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c0c: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x199c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c10: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x199c14: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x199c14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c18: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x199c1c: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x199c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c20: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x199c20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x199c24: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x199c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c28: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x199c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x199c2c: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x199c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c30: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x199c34: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x199c34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c38: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199c3c: 0xa623001e  sh          $v1, 0x1E($s1)
    ctx->pc = 0x199c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c40: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x199c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x199c44: 0xa6230020  sh          $v1, 0x20($s1)
    ctx->pc = 0x199c44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c48: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x199c4c: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x199c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c50: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x199c50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x199c54: 0xa6230024  sh          $v1, 0x24($s1)
    ctx->pc = 0x199c54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x199c58: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x199c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x199c5c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x199c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x199c60: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x199c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x199c64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x199c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x199c68: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x199c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x199c6c: 0xa622004a  sh          $v0, 0x4A($s1)
    ctx->pc = 0x199c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 2));
label_199c70:
    // 0x199c70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199c74:
    // 0x199c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c80: 0x3e00008  jr          $ra
    ctx->pc = 0x199C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C80u;
            // 0x199c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199C88u;
}
