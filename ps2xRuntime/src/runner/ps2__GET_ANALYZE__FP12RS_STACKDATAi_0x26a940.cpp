#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ANALYZE__FP12RS_STACKDATAi
// Address: 0x26a940 - 0x26a9f0
void ps2__GET_ANALYZE__FP12RS_STACKDATAi_0x26a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ANALYZE__FP12RS_STACKDATAi_0x26a940");
#endif

    switch (ctx->pc) {
        case 0x26a95cu: goto label_26a95c;
        case 0x26a994u: goto label_26a994;
        case 0x26a9acu: goto label_26a9ac;
        case 0x26a9c8u: goto label_26a9c8;
        case 0x26a9d4u: goto label_26a9d4;
        default: break;
    }

    ctx->pc = 0x26a940u;

    // 0x26a940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26a944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26a948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a954: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A954u;
    SET_GPR_U32(ctx, 31, 0x26A95Cu);
    ctx->pc = 0x26A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A954u;
            // 0x26a958: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A95Cu; }
        if (ctx->pc != 0x26A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A95Cu; }
        if (ctx->pc != 0x26A95Cu) { return; }
    }
    ctx->pc = 0x26A95Cu;
label_26a95c:
    // 0x26a95c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x26a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x26a960: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x26a960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26a964: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x26a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x26a968: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x26a968u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26a96c: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x26a96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x26a970: 0x0  nop
    ctx->pc = 0x26a970u;
    // NOP
    // 0x26a974: 0x0  nop
    ctx->pc = 0x26a974u;
    // NOP
    // 0x26a978: 0x1810  mfhi        $v1
    ctx->pc = 0x26a978u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x26a97c: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x26a97cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26a980: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x26a980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x26a984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26a988: 0x9010  mfhi        $s2
    ctx->pc = 0x26a988u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x26a98c: 0xc064220  jal         func_190880
    ctx->pc = 0x26A98Cu;
    SET_GPR_U32(ctx, 31, 0x26A994u);
    ctx->pc = 0x26A990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A98Cu;
            // 0x26a990: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A994u; }
        if (ctx->pc != 0x26A994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A994u; }
        if (ctx->pc != 0x26A994u) { return; }
    }
    ctx->pc = 0x26A994u;
label_26a994:
    // 0x26a994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A994u;
    {
        const bool branch_taken_0x26a994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A994u;
            // 0x26a998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a994) {
            ctx->pc = 0x26A9A4u;
            goto label_26a9a4;
        }
    }
    ctx->pc = 0x26A99Cu;
    // 0x26a99c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26A99Cu;
    {
        const bool branch_taken_0x26a99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A99Cu;
            // 0x26a9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a99c) {
            ctx->pc = 0x26A9D8u;
            goto label_26a9d8;
        }
    }
    ctx->pc = 0x26A9A4u;
label_26a9a4:
    // 0x26a9a4: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x26A9A4u;
    SET_GPR_U32(ctx, 31, 0x26A9ACu);
    ctx->pc = 0x26A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9A4u;
            // 0x26a9a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9ACu; }
        if (ctx->pc != 0x26A9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9ACu; }
        if (ctx->pc != 0x26A9ACu) { return; }
    }
    ctx->pc = 0x26A9ACu;
label_26a9ac:
    // 0x26a9ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A9ACu;
    {
        const bool branch_taken_0x26a9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9ACu;
            // 0x26a9b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9ac) {
            ctx->pc = 0x26A9BCu;
            goto label_26a9bc;
        }
    }
    ctx->pc = 0x26A9B4u;
    // 0x26a9b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26A9B4u;
    {
        const bool branch_taken_0x26a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9B4u;
            // 0x26a9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9b4) {
            ctx->pc = 0x26A9D8u;
            goto label_26a9d8;
        }
    }
    ctx->pc = 0x26A9BCu;
label_26a9bc:
    // 0x26a9bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26a9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9c0: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x26A9C0u;
    SET_GPR_U32(ctx, 31, 0x26A9C8u);
    ctx->pc = 0x26A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9C0u;
            // 0x26a9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9C8u; }
        if (ctx->pc != 0x26A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9C8u; }
        if (ctx->pc != 0x26A9C8u) { return; }
    }
    ctx->pc = 0x26A9C8u;
label_26a9c8:
    // 0x26a9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9cc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A9CCu;
    SET_GPR_U32(ctx, 31, 0x26A9D4u);
    ctx->pc = 0x26A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9CCu;
            // 0x26a9d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9D4u; }
        if (ctx->pc != 0x26A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9D4u; }
        if (ctx->pc != 0x26A9D4u) { return; }
    }
    ctx->pc = 0x26A9D4u;
label_26a9d4:
    // 0x26a9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a9d8:
    // 0x26a9d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a9dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x26A9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9E8u;
            // 0x26a9ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A9F0u;
}
