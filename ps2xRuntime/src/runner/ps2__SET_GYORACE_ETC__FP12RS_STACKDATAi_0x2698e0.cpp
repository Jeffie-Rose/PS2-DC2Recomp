#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_GYORACE_ETC__FP12RS_STACKDATAi
// Address: 0x2698e0 - 0x269ecc
void ps2__SET_GYORACE_ETC__FP12RS_STACKDATAi_0x2698e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_GYORACE_ETC__FP12RS_STACKDATAi_0x2698e0");
#endif

    switch (ctx->pc) {
        case 0x269904u: goto label_269904;
        case 0x269930u: goto label_269930;
        case 0x269938u: goto label_269938;
        case 0x269948u: goto label_269948;
        case 0x269950u: goto label_269950;
        case 0x269960u: goto label_269960;
        case 0x269968u: goto label_269968;
        case 0x269978u: goto label_269978;
        case 0x269980u: goto label_269980;
        case 0x269990u: goto label_269990;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699ecu: goto label_2699ec;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a40u: goto label_269a40;
        case 0x269a48u: goto label_269a48;
        case 0x269a64u: goto label_269a64;
        case 0x269a70u: goto label_269a70;
        case 0x269ae4u: goto label_269ae4;
        case 0x269b20u: goto label_269b20;
        case 0x269b60u: goto label_269b60;
        case 0x269bfcu: goto label_269bfc;
        case 0x269c38u: goto label_269c38;
        case 0x269c50u: goto label_269c50;
        case 0x269c68u: goto label_269c68;
        case 0x269c80u: goto label_269c80;
        case 0x269c98u: goto label_269c98;
        case 0x269cb0u: goto label_269cb0;
        case 0x269cc8u: goto label_269cc8;
        case 0x269ce0u: goto label_269ce0;
        case 0x269cf8u: goto label_269cf8;
        case 0x269d10u: goto label_269d10;
        case 0x269d24u: goto label_269d24;
        case 0x269d2cu: goto label_269d2c;
        case 0x269d68u: goto label_269d68;
        case 0x269d80u: goto label_269d80;
        case 0x269d98u: goto label_269d98;
        case 0x269db0u: goto label_269db0;
        case 0x269dc8u: goto label_269dc8;
        case 0x269de0u: goto label_269de0;
        case 0x269df8u: goto label_269df8;
        case 0x269e10u: goto label_269e10;
        case 0x269e28u: goto label_269e28;
        case 0x269e40u: goto label_269e40;
        case 0x269e58u: goto label_269e58;
        case 0x269e80u: goto label_269e80;
        case 0x269e90u: goto label_269e90;
        case 0x269e98u: goto label_269e98;
        default: break;
    }

    ctx->pc = 0x2698e0u;

    // 0x2698e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2698e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2698e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2698e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2698e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2698e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2698ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2698ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2698f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2698f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2698f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2698f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2698f8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2698f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2698fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2698FCu;
    SET_GPR_U32(ctx, 31, 0x269904u);
    ctx->pc = 0x269900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2698FCu;
            // 0x269900: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269904u; }
        if (ctx->pc != 0x269904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269904u; }
        if (ctx->pc != 0x269904u) { return; }
    }
    ctx->pc = 0x269904u;
label_269904:
    // 0x269904: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x269904u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x269908: 0x10200165  beqz        $at, . + 4 + (0x165 << 2)
    ctx->pc = 0x269908u;
    {
        const bool branch_taken_0x269908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269908u;
            // 0x26990c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269908) {
            ctx->pc = 0x269EA0u;
            goto label_269ea0;
        }
    }
    ctx->pc = 0x269910u;
    // 0x269910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269914: 0x2463c8c0  addiu       $v1, $v1, -0x3740
    ctx->pc = 0x269914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953152));
    // 0x269918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26991c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269920: 0x400008  jr          $v0
    ctx->pc = 0x269920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269928u: goto label_269928;
            case 0x269940u: goto label_269940;
            case 0x269958u: goto label_269958;
            case 0x269970u: goto label_269970;
            case 0x269988u: goto label_269988;
            case 0x2699B0u: goto label_2699b0;
            case 0x269A34u: goto label_269a34;
            case 0x269E88u: goto label_269e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269928u;
label_269928:
    // 0x269928: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269928u;
    SET_GPR_U32(ctx, 31, 0x269930u);
    ctx->pc = 0x26992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269928u;
            // 0x26992c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269930u; }
        if (ctx->pc != 0x269930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269930u; }
        if (ctx->pc != 0x269930u) { return; }
    }
    ctx->pc = 0x269930u;
label_269930:
    // 0x269930: 0xc0865f4  jal         func_2197D0
    ctx->pc = 0x269930u;
    SET_GPR_U32(ctx, 31, 0x269938u);
    ctx->pc = 0x269934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269930u;
            // 0x269934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2197D0u;
    if (runtime->hasFunction(0x2197D0u)) {
        auto targetFn = runtime->lookupFunction(0x2197D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269938u; }
        if (ctx->pc != 0x269938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGyoRaceAquariumNo__Fi_0x2197d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269938u; }
        if (ctx->pc != 0x269938u) { return; }
    }
    ctx->pc = 0x269938u;
label_269938:
    // 0x269938: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x269938u;
    {
        const bool branch_taken_0x269938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26993Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269938u;
            // 0x26993c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269938) {
            ctx->pc = 0x269EACu;
            goto label_269eac;
        }
    }
    ctx->pc = 0x269940u;
label_269940:
    // 0x269940: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269940u;
    SET_GPR_U32(ctx, 31, 0x269948u);
    ctx->pc = 0x269944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269940u;
            // 0x269944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269948u; }
        if (ctx->pc != 0x269948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269948u; }
        if (ctx->pc != 0x269948u) { return; }
    }
    ctx->pc = 0x269948u;
label_269948:
    // 0x269948: 0xc086610  jal         func_219840
    ctx->pc = 0x269948u;
    SET_GPR_U32(ctx, 31, 0x269950u);
    ctx->pc = 0x26994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269948u;
            // 0x26994c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219840u;
    if (runtime->hasFunction(0x219840u)) {
        auto targetFn = runtime->lookupFunction(0x219840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269950u; }
        if (ctx->pc != 0x269950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGyoRaceRanking__Fi_0x219840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269950u; }
        if (ctx->pc != 0x269950u) { return; }
    }
    ctx->pc = 0x269950u;
label_269950:
    // 0x269950: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x269950u;
    {
        const bool branch_taken_0x269950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269950) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269958u;
label_269958:
    // 0x269958: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269958u;
    SET_GPR_U32(ctx, 31, 0x269960u);
    ctx->pc = 0x26995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269958u;
            // 0x26995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269960u; }
        if (ctx->pc != 0x269960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269960u; }
        if (ctx->pc != 0x269960u) { return; }
    }
    ctx->pc = 0x269960u;
label_269960:
    // 0x269960: 0xc0865fc  jal         func_2197F0
    ctx->pc = 0x269960u;
    SET_GPR_U32(ctx, 31, 0x269968u);
    ctx->pc = 0x269964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269960u;
            // 0x269964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2197F0u;
    if (runtime->hasFunction(0x2197F0u)) {
        auto targetFn = runtime->lookupFunction(0x2197F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269968u; }
        if (ctx->pc != 0x269968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGyoRaceClass__Fi_0x2197f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269968u; }
        if (ctx->pc != 0x269968u) { return; }
    }
    ctx->pc = 0x269968u;
label_269968:
    // 0x269968: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x269968u;
    {
        const bool branch_taken_0x269968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269968) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269970u;
label_269970:
    // 0x269970: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269970u;
    SET_GPR_U32(ctx, 31, 0x269978u);
    ctx->pc = 0x269974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269970u;
            // 0x269974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269978u; }
        if (ctx->pc != 0x269978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269978u; }
        if (ctx->pc != 0x269978u) { return; }
    }
    ctx->pc = 0x269978u;
label_269978:
    // 0x269978: 0xc086604  jal         func_219810
    ctx->pc = 0x269978u;
    SET_GPR_U32(ctx, 31, 0x269980u);
    ctx->pc = 0x26997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269978u;
            // 0x26997c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219810u;
    if (runtime->hasFunction(0x219810u)) {
        auto targetFn = runtime->lookupFunction(0x219810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269980u; }
        if (ctx->pc != 0x269980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGyoRaceNo__Fi_0x219810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269980u; }
        if (ctx->pc != 0x269980u) { return; }
    }
    ctx->pc = 0x269980u;
label_269980:
    // 0x269980: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x269980u;
    {
        const bool branch_taken_0x269980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269980) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269988u;
label_269988:
    // 0x269988: 0xc064220  jal         func_190880
    ctx->pc = 0x269988u;
    SET_GPR_U32(ctx, 31, 0x269990u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269990u; }
        if (ctx->pc != 0x269990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269990u; }
        if (ctx->pc != 0x269990u) { return; }
    }
    ctx->pc = 0x269990u;
label_269990:
    // 0x269990: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269990u;
    {
        const bool branch_taken_0x269990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269990u;
            // 0x269994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269990) {
            ctx->pc = 0x2699A0u;
            goto label_2699a0;
        }
    }
    ctx->pc = 0x269998u;
    // 0x269998: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x269998u;
    {
        const bool branch_taken_0x269998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269998u;
            // 0x26999c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269998) {
            ctx->pc = 0x269EACu;
            goto label_269eac;
        }
    }
    ctx->pc = 0x2699A0u;
label_2699a0:
    // 0x2699a0: 0xc0bdabc  jal         func_2F6AF0
    ctx->pc = 0x2699A0u;
    SET_GPR_U32(ctx, 31, 0x2699A8u);
    ctx->pc = 0x2699A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699A0u;
            // 0x2699a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6AF0u;
    if (runtime->hasFunction(0x2F6AF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699A8u; }
        if (ctx->pc != 0x2699A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTourCountEtc__9CSaveDataFi_0x2f6af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699A8u; }
        if (ctx->pc != 0x2699A8u) { return; }
    }
    ctx->pc = 0x2699A8u;
label_2699a8:
    // 0x2699a8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2699A8u;
    {
        const bool branch_taken_0x2699a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2699a8) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x2699B0u;
label_2699b0:
    // 0x2699b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2699b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699b4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2699B4u;
    SET_GPR_U32(ctx, 31, 0x2699BCu);
    ctx->pc = 0x2699B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699B4u;
            // 0x2699b8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699BCu; }
        if (ctx->pc != 0x2699BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699BCu; }
        if (ctx->pc != 0x2699BCu) { return; }
    }
    ctx->pc = 0x2699BCu;
label_2699bc:
    // 0x2699bc: 0xc0956bc  jal         func_255AF0
    ctx->pc = 0x2699BCu;
    SET_GPR_U32(ctx, 31, 0x2699C4u);
    ctx->pc = 0x2699C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699BCu;
            // 0x2699c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255AF0u;
    if (runtime->hasFunction(0x255AF0u)) {
        auto targetFn = runtime->lookupFunction(0x255AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699C4u; }
        if (ctx->pc != 0x2699C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventMessage__Fi_0x255af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699C4u; }
        if (ctx->pc != 0x2699C4u) { return; }
    }
    ctx->pc = 0x2699C4u;
label_2699c4:
    // 0x2699c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2699c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699c8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2699C8u;
    {
        const bool branch_taken_0x2699c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2699CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2699C8u;
            // 0x2699cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699c8) {
            ctx->pc = 0x2699D8u;
            goto label_2699d8;
        }
    }
    ctx->pc = 0x2699D0u;
    // 0x2699d0: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2699D0u;
    {
        const bool branch_taken_0x2699d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2699D0u;
            // 0x2699d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699d0) {
            ctx->pc = 0x269EACu;
            goto label_269eac;
        }
    }
    ctx->pc = 0x2699D8u;
label_2699d8:
    // 0x2699d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2699D8u;
    SET_GPR_U32(ctx, 31, 0x2699E0u);
    ctx->pc = 0x2699DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699D8u;
            // 0x2699dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699E0u; }
        if (ctx->pc != 0x2699E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699E0u; }
        if (ctx->pc != 0x2699E0u) { return; }
    }
    ctx->pc = 0x2699E0u;
label_2699e0:
    // 0x2699e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2699e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2699E4u;
    SET_GPR_U32(ctx, 31, 0x2699ECu);
    ctx->pc = 0x2699E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2699E4u;
            // 0x2699e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699ECu; }
        if (ctx->pc != 0x2699ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699ECu; }
        if (ctx->pc != 0x2699ECu) { return; }
    }
    ctx->pc = 0x2699ECu;
label_2699ec:
    // 0x2699ec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2699f0: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2699f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x2699f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2699f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2699f8: 0x24639e60  addiu       $v1, $v1, -0x61A0
    ctx->pc = 0x2699f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942304));
    // 0x2699fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269a00: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269a04: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269A04u;
    {
        const bool branch_taken_0x269a04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x269A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A04u;
            // 0x269a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a04) {
            ctx->pc = 0x269A14u;
            goto label_269a14;
        }
    }
    ctx->pc = 0x269A0Cu;
    // 0x269a0c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x269A0Cu;
    {
        const bool branch_taken_0x269a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A0Cu;
            // 0x269a10: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a0c) {
            ctx->pc = 0x269EB0u;
            goto label_269eb0;
        }
    }
    ctx->pc = 0x269A14u;
label_269a14:
    // 0x269a14: 0x10a00124  beqz        $a1, . + 4 + (0x124 << 2)
    ctx->pc = 0x269A14u;
    {
        const bool branch_taken_0x269a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A14u;
            // 0x269a18: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a14) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269A1Cu;
    // 0x269a1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x269a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x269a20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x269a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x269a24: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x269A24u;
    SET_GPR_U32(ctx, 31, 0x269A2Cu);
    ctx->pc = 0x269A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A24u;
            // 0x269a28: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A2Cu; }
        if (ctx->pc != 0x269A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A2Cu; }
        if (ctx->pc != 0x269A2Cu) { return; }
    }
    ctx->pc = 0x269A2Cu;
label_269a2c:
    // 0x269a2c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x269A2Cu;
    {
        const bool branch_taken_0x269a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a2c) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269A34u;
label_269a34:
    // 0x269a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a38: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269A38u;
    SET_GPR_U32(ctx, 31, 0x269A40u);
    ctx->pc = 0x269A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A38u;
            // 0x269a3c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A40u; }
        if (ctx->pc != 0x269A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A40u; }
        if (ctx->pc != 0x269A40u) { return; }
    }
    ctx->pc = 0x269A40u;
label_269a40:
    // 0x269a40: 0xc0956bc  jal         func_255AF0
    ctx->pc = 0x269A40u;
    SET_GPR_U32(ctx, 31, 0x269A48u);
    ctx->pc = 0x269A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A40u;
            // 0x269a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255AF0u;
    if (runtime->hasFunction(0x255AF0u)) {
        auto targetFn = runtime->lookupFunction(0x255AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A48u; }
        if (ctx->pc != 0x269A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventMessage__Fi_0x255af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A48u; }
        if (ctx->pc != 0x269A48u) { return; }
    }
    ctx->pc = 0x269A48u;
label_269a48:
    // 0x269a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a4c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269A4Cu;
    {
        const bool branch_taken_0x269a4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A4Cu;
            // 0x269a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a4c) {
            ctx->pc = 0x269A5Cu;
            goto label_269a5c;
        }
    }
    ctx->pc = 0x269A54u;
    // 0x269a54: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x269A54u;
    {
        const bool branch_taken_0x269a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A54u;
            // 0x269a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a54) {
            ctx->pc = 0x269EACu;
            goto label_269eac;
        }
    }
    ctx->pc = 0x269A5Cu;
label_269a5c:
    // 0x269a5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269A5Cu;
    SET_GPR_U32(ctx, 31, 0x269A64u);
    ctx->pc = 0x269A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A5Cu;
            // 0x269a60: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A64u; }
        if (ctx->pc != 0x269A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A64u; }
        if (ctx->pc != 0x269A64u) { return; }
    }
    ctx->pc = 0x269A64u;
label_269a64:
    // 0x269a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a68: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269A68u;
    SET_GPR_U32(ctx, 31, 0x269A70u);
    ctx->pc = 0x269A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A68u;
            // 0x269a6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A70u; }
        if (ctx->pc != 0x269A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A70u; }
        if (ctx->pc != 0x269A70u) { return; }
    }
    ctx->pc = 0x269A70u;
label_269a70:
    // 0x269a70: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x269a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x269a74: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x269a78: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x269a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x269a7c: 0x24639e78  addiu       $v1, $v1, -0x6188
    ctx->pc = 0x269a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942328));
    // 0x269a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269a84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x269a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269a88: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x269a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x269a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a90: 0x0  nop
    ctx->pc = 0x269a90u;
    // NOP
    // 0x269a94: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x269a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269a98: 0x0  nop
    ctx->pc = 0x269a98u;
    // NOP
    // 0x269a9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x269A9Cu;
    {
        const bool branch_taken_0x269a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A9Cu;
            // 0x269aa0: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a9c) {
            ctx->pc = 0x269AA8u;
            goto label_269aa8;
        }
    }
    ctx->pc = 0x269AA4u;
    // 0x269aa4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x269aa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_269aa8:
    // 0x269aa8: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x269aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
    // 0x269aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269ab0: 0x0  nop
    ctx->pc = 0x269ab0u;
    // NOP
    // 0x269ab4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x269ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269ab8: 0x0  nop
    ctx->pc = 0x269ab8u;
    // NOP
    // 0x269abc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x269ABCu;
    {
        const bool branch_taken_0x269abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269ABCu;
            // 0x269ac0: 0x3c024561  lui         $v0, 0x4561 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269abc) {
            ctx->pc = 0x269AC8u;
            goto label_269ac8;
        }
    }
    ctx->pc = 0x269AC4u;
    // 0x269ac4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x269ac4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_269ac8:
    // 0x269ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269acc: 0x0  nop
    ctx->pc = 0x269accu;
    // NOP
    // 0x269ad0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x269ad0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x269ad4: 0x0  nop
    ctx->pc = 0x269ad4u;
    // NOP
    // 0x269ad8: 0x0  nop
    ctx->pc = 0x269ad8u;
    // NOP
    // 0x269adc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x269ADCu;
    SET_GPR_U32(ctx, 31, 0x269AE4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AE4u; }
        if (ctx->pc != 0x269AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AE4u; }
        if (ctx->pc != 0x269AE4u) { return; }
    }
    ctx->pc = 0x269AE4u;
label_269ae4:
    // 0x269ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269ae8: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x269ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
    // 0x269aec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x269aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269af0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x269af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269af4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269af8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x269af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x269afc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x269afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269b00: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x269b00u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x269b04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269b08: 0x0  nop
    ctx->pc = 0x269b08u;
    // NOP
    // 0x269b0c: 0x4602a303  div.s       $f12, $f20, $f2
    ctx->pc = 0x269b0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x269b10: 0x0  nop
    ctx->pc = 0x269b10u;
    // NOP
    // 0x269b14: 0x0  nop
    ctx->pc = 0x269b14u;
    // NOP
    // 0x269b18: 0xc0a248c  jal         func_289230
    ctx->pc = 0x269B18u;
    SET_GPR_U32(ctx, 31, 0x269B20u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B20u; }
        if (ctx->pc != 0x269B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B20u; }
        if (ctx->pc != 0x269B20u) { return; }
    }
    ctx->pc = 0x269B20u;
label_269b20:
    // 0x269b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269b24: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x269b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x269b28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269b2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x269b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x269b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x269b34: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x269b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x269b38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x269b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x269b3c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x269b3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x269b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269b44: 0x0  nop
    ctx->pc = 0x269b44u;
    // NOP
    // 0x269b48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269b4c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x269b4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x269b50: 0x0  nop
    ctx->pc = 0x269b50u;
    // NOP
    // 0x269b54: 0x0  nop
    ctx->pc = 0x269b54u;
    // NOP
    // 0x269b58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x269B58u;
    SET_GPR_U32(ctx, 31, 0x269B60u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B60u; }
        if (ctx->pc != 0x269B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B60u; }
        if (ctx->pc != 0x269B60u) { return; }
    }
    ctx->pc = 0x269B60u;
label_269b60:
    // 0x269b60: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x269b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x269b64: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x269b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x269b68: 0x348b6667  ori         $t3, $a0, 0x6667
    ctx->pc = 0x269b68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x269b6c: 0x1257c2  srl         $t2, $s2, 31
    ctx->pc = 0x269b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x269b70: 0x1720018  mult        $zero, $t3, $s2
    ctx->pc = 0x269b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x269b74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x269b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269b78: 0x134fc2  srl         $t1, $s3, 31
    ctx->pc = 0x269b78u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x269b7c: 0x247c2  srl         $t0, $v0, 31
    ctx->pc = 0x269b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x269b80: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x269b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x269b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b88: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x269b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x269b8c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x269b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x269b90: 0x3810  mfhi        $a3
    ctx->pc = 0x269b90u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x269b94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269b98: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x269b98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x269b9c: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x269b9cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x269ba0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x269ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x269ba4: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x269ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x269ba8: 0x3810  mfhi        $a3
    ctx->pc = 0x269ba8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x269bac: 0x1730018  mult        $zero, $t3, $s3
    ctx->pc = 0x269bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x269bb0: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x269bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
    // 0x269bb4: 0x0  nop
    ctx->pc = 0x269bb4u;
    // NOP
    // 0x269bb8: 0x3810  mfhi        $a3
    ctx->pc = 0x269bb8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x269bbc: 0x263001a  div         $zero, $s3, $v1
    ctx->pc = 0x269bbcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x269bc0: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x269bc0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x269bc4: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x269bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x269bc8: 0xafa7006c  sw          $a3, 0x6C($sp)
    ctx->pc = 0x269bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 7));
    // 0x269bcc: 0x3810  mfhi        $a3
    ctx->pc = 0x269bccu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x269bd0: 0x1620018  mult        $zero, $t3, $v0
    ctx->pc = 0x269bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x269bd4: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x269bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x269bd8: 0x0  nop
    ctx->pc = 0x269bd8u;
    // NOP
    // 0x269bdc: 0x3810  mfhi        $a3
    ctx->pc = 0x269bdcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x269be0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x269be0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x269be4: 0x71083  sra         $v0, $a3, 2
    ctx->pc = 0x269be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 2));
    // 0x269be8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x269be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x269bec: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x269becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x269bf0: 0x1010  mfhi        $v0
    ctx->pc = 0x269bf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x269bf4: 0xc049c86  jal         func_127218
    ctx->pc = 0x269BF4u;
    SET_GPR_U32(ctx, 31, 0x269BFCu);
    ctx->pc = 0x269BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269BF4u;
            // 0x269bf8: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269BFCu; }
        if (ctx->pc != 0x269BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269BFCu; }
        if (ctx->pc != 0x269BFCu) { return; }
    }
    ctx->pc = 0x269BFCu;
label_269bfc:
    // 0x269bfc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x269bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269c00: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x269c00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x269c04: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x269C04u;
    {
        const bool branch_taken_0x269c04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C04u;
            // 0x269c08: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c04) {
            ctx->pc = 0x269D18u;
            goto label_269d18;
        }
    }
    ctx->pc = 0x269C0Cu;
    // 0x269c0c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x269c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x269c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269c14: 0x2463c890  addiu       $v1, $v1, -0x3770
    ctx->pc = 0x269c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953104));
    // 0x269c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269c1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x269c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269c20: 0x400008  jr          $v0
    ctx->pc = 0x269C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269C28u: goto label_269c28;
            case 0x269C40u: goto label_269c40;
            case 0x269C58u: goto label_269c58;
            case 0x269C70u: goto label_269c70;
            case 0x269C88u: goto label_269c88;
            case 0x269CA0u: goto label_269ca0;
            case 0x269CB8u: goto label_269cb8;
            case 0x269CD0u: goto label_269cd0;
            case 0x269CE8u: goto label_269ce8;
            case 0x269D00u: goto label_269d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269C28u;
label_269c28:
    // 0x269c28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269c2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269c30: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269C30u;
    SET_GPR_U32(ctx, 31, 0x269C38u);
    ctx->pc = 0x269C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269C30u;
            // 0x269c34: 0x24a5c538  addiu       $a1, $a1, -0x3AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C38u; }
        if (ctx->pc != 0x269C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C38u; }
        if (ctx->pc != 0x269C38u) { return; }
    }
    ctx->pc = 0x269C38u;
label_269c38:
    // 0x269c38: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x269C38u;
    {
        const bool branch_taken_0x269c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C38u;
            // 0x269c3c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c38) {
            ctx->pc = 0x269D28u;
            goto label_269d28;
        }
    }
    ctx->pc = 0x269C40u;
label_269c40:
    // 0x269c40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269c44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269c48: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269C48u;
    SET_GPR_U32(ctx, 31, 0x269C50u);
    ctx->pc = 0x269C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269C48u;
            // 0x269c4c: 0x24a5c540  addiu       $a1, $a1, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C50u; }
        if (ctx->pc != 0x269C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C50u; }
        if (ctx->pc != 0x269C50u) { return; }
    }
    ctx->pc = 0x269C50u;
label_269c50:
    // 0x269c50: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x269C50u;
    {
        const bool branch_taken_0x269c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c50) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269C58u;
label_269c58:
    // 0x269c58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269c5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269c60: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269C60u;
    SET_GPR_U32(ctx, 31, 0x269C68u);
    ctx->pc = 0x269C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269C60u;
            // 0x269c64: 0x24a5c548  addiu       $a1, $a1, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C68u; }
        if (ctx->pc != 0x269C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C68u; }
        if (ctx->pc != 0x269C68u) { return; }
    }
    ctx->pc = 0x269C68u;
label_269c68:
    // 0x269c68: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x269C68u;
    {
        const bool branch_taken_0x269c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c68) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269C70u;
label_269c70:
    // 0x269c70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269c74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269c78: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269C78u;
    SET_GPR_U32(ctx, 31, 0x269C80u);
    ctx->pc = 0x269C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269C78u;
            // 0x269c7c: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C80u; }
        if (ctx->pc != 0x269C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C80u; }
        if (ctx->pc != 0x269C80u) { return; }
    }
    ctx->pc = 0x269C80u;
label_269c80:
    // 0x269c80: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x269C80u;
    {
        const bool branch_taken_0x269c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c80) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269C88u;
label_269c88:
    // 0x269c88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269c8c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269c90: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269C90u;
    SET_GPR_U32(ctx, 31, 0x269C98u);
    ctx->pc = 0x269C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269C90u;
            // 0x269c94: 0x24a5c558  addiu       $a1, $a1, -0x3AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C98u; }
        if (ctx->pc != 0x269C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C98u; }
        if (ctx->pc != 0x269C98u) { return; }
    }
    ctx->pc = 0x269C98u;
label_269c98:
    // 0x269c98: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x269C98u;
    {
        const bool branch_taken_0x269c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c98) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269CA0u;
label_269ca0:
    // 0x269ca0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269ca4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269ca8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269CA8u;
    SET_GPR_U32(ctx, 31, 0x269CB0u);
    ctx->pc = 0x269CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269CA8u;
            // 0x269cac: 0x24a5c560  addiu       $a1, $a1, -0x3AA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CB0u; }
        if (ctx->pc != 0x269CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CB0u; }
        if (ctx->pc != 0x269CB0u) { return; }
    }
    ctx->pc = 0x269CB0u;
label_269cb0:
    // 0x269cb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x269CB0u;
    {
        const bool branch_taken_0x269cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269cb0) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269CB8u;
label_269cb8:
    // 0x269cb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269cbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269cc0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269CC0u;
    SET_GPR_U32(ctx, 31, 0x269CC8u);
    ctx->pc = 0x269CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269CC0u;
            // 0x269cc4: 0x24a5c568  addiu       $a1, $a1, -0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CC8u; }
        if (ctx->pc != 0x269CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CC8u; }
        if (ctx->pc != 0x269CC8u) { return; }
    }
    ctx->pc = 0x269CC8u;
label_269cc8:
    // 0x269cc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x269CC8u;
    {
        const bool branch_taken_0x269cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269cc8) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269CD0u;
label_269cd0:
    // 0x269cd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269cd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269cd8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269CD8u;
    SET_GPR_U32(ctx, 31, 0x269CE0u);
    ctx->pc = 0x269CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269CD8u;
            // 0x269cdc: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CE0u; }
        if (ctx->pc != 0x269CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CE0u; }
        if (ctx->pc != 0x269CE0u) { return; }
    }
    ctx->pc = 0x269CE0u;
label_269ce0:
    // 0x269ce0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x269CE0u;
    {
        const bool branch_taken_0x269ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ce0) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269CE8u;
label_269ce8:
    // 0x269ce8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269cec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269cf0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269CF0u;
    SET_GPR_U32(ctx, 31, 0x269CF8u);
    ctx->pc = 0x269CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269CF0u;
            // 0x269cf4: 0x24a5c578  addiu       $a1, $a1, -0x3A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CF8u; }
        if (ctx->pc != 0x269CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269CF8u; }
        if (ctx->pc != 0x269CF8u) { return; }
    }
    ctx->pc = 0x269CF8u;
label_269cf8:
    // 0x269cf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x269CF8u;
    {
        const bool branch_taken_0x269cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269cf8) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269D00u;
label_269d00:
    // 0x269d00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269d04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269d08: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269D08u;
    SET_GPR_U32(ctx, 31, 0x269D10u);
    ctx->pc = 0x269D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D08u;
            // 0x269d0c: 0x24a5c580  addiu       $a1, $a1, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D10u; }
        if (ctx->pc != 0x269D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D10u; }
        if (ctx->pc != 0x269D10u) { return; }
    }
    ctx->pc = 0x269D10u;
label_269d10:
    // 0x269d10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x269D10u;
    {
        const bool branch_taken_0x269d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d10) {
            ctx->pc = 0x269D24u;
            goto label_269d24;
        }
    }
    ctx->pc = 0x269D18u;
label_269d18:
    // 0x269d18: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269d1c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x269D1Cu;
    SET_GPR_U32(ctx, 31, 0x269D24u);
    ctx->pc = 0x269D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D1Cu;
            // 0x269d20: 0x24a5c588  addiu       $a1, $a1, -0x3A78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D24u; }
        if (ctx->pc != 0x269D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D24u; }
        if (ctx->pc != 0x269D24u) { return; }
    }
    ctx->pc = 0x269D24u;
label_269d24:
    // 0x269d24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x269d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269d28:
    // 0x269d28: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x269d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_269d2c:
    // 0x269d2c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x269d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x269d30: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x269d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x269d34: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x269d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x269d38: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x269D38u;
    {
        const bool branch_taken_0x269d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269D38u;
            // 0x269d3c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d38) {
            ctx->pc = 0x269E48u;
            goto label_269e48;
        }
    }
    ctx->pc = 0x269D40u;
    // 0x269d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269d44: 0x2463c860  addiu       $v1, $v1, -0x37A0
    ctx->pc = 0x269d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953056));
    // 0x269d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269d4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x269d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269d50: 0x400008  jr          $v0
    ctx->pc = 0x269D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269D58u: goto label_269d58;
            case 0x269D70u: goto label_269d70;
            case 0x269D88u: goto label_269d88;
            case 0x269DA0u: goto label_269da0;
            case 0x269DB8u: goto label_269db8;
            case 0x269DD0u: goto label_269dd0;
            case 0x269DE8u: goto label_269de8;
            case 0x269E00u: goto label_269e00;
            case 0x269E18u: goto label_269e18;
            case 0x269E30u: goto label_269e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269D58u;
label_269d58:
    // 0x269d58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269d5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269d60: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269D60u;
    SET_GPR_U32(ctx, 31, 0x269D68u);
    ctx->pc = 0x269D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D60u;
            // 0x269d64: 0x24a5c538  addiu       $a1, $a1, -0x3AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D68u; }
        if (ctx->pc != 0x269D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D68u; }
        if (ctx->pc != 0x269D68u) { return; }
    }
    ctx->pc = 0x269D68u;
label_269d68:
    // 0x269d68: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x269D68u;
    {
        const bool branch_taken_0x269d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d68) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269D70u;
label_269d70:
    // 0x269d70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269d74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269d78: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269D78u;
    SET_GPR_U32(ctx, 31, 0x269D80u);
    ctx->pc = 0x269D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D78u;
            // 0x269d7c: 0x24a5c540  addiu       $a1, $a1, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D80u; }
        if (ctx->pc != 0x269D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D80u; }
        if (ctx->pc != 0x269D80u) { return; }
    }
    ctx->pc = 0x269D80u;
label_269d80:
    // 0x269d80: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x269D80u;
    {
        const bool branch_taken_0x269d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d80) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269D88u;
label_269d88:
    // 0x269d88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269d8c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269d90: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269D90u;
    SET_GPR_U32(ctx, 31, 0x269D98u);
    ctx->pc = 0x269D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269D90u;
            // 0x269d94: 0x24a5c548  addiu       $a1, $a1, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D98u; }
        if (ctx->pc != 0x269D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269D98u; }
        if (ctx->pc != 0x269D98u) { return; }
    }
    ctx->pc = 0x269D98u;
label_269d98:
    // 0x269d98: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x269D98u;
    {
        const bool branch_taken_0x269d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d98) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269DA0u;
label_269da0:
    // 0x269da0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269da4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269da8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269DA8u;
    SET_GPR_U32(ctx, 31, 0x269DB0u);
    ctx->pc = 0x269DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269DA8u;
            // 0x269dac: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DB0u; }
        if (ctx->pc != 0x269DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DB0u; }
        if (ctx->pc != 0x269DB0u) { return; }
    }
    ctx->pc = 0x269DB0u;
label_269db0:
    // 0x269db0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x269DB0u;
    {
        const bool branch_taken_0x269db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269db0) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269DB8u;
label_269db8:
    // 0x269db8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269dbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269dc0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269DC0u;
    SET_GPR_U32(ctx, 31, 0x269DC8u);
    ctx->pc = 0x269DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269DC0u;
            // 0x269dc4: 0x24a5c558  addiu       $a1, $a1, -0x3AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DC8u; }
        if (ctx->pc != 0x269DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DC8u; }
        if (ctx->pc != 0x269DC8u) { return; }
    }
    ctx->pc = 0x269DC8u;
label_269dc8:
    // 0x269dc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x269DC8u;
    {
        const bool branch_taken_0x269dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269dc8) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269DD0u;
label_269dd0:
    // 0x269dd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269dd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269dd8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269DD8u;
    SET_GPR_U32(ctx, 31, 0x269DE0u);
    ctx->pc = 0x269DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269DD8u;
            // 0x269ddc: 0x24a5c560  addiu       $a1, $a1, -0x3AA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DE0u; }
        if (ctx->pc != 0x269DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DE0u; }
        if (ctx->pc != 0x269DE0u) { return; }
    }
    ctx->pc = 0x269DE0u;
label_269de0:
    // 0x269de0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x269DE0u;
    {
        const bool branch_taken_0x269de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269de0) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269DE8u;
label_269de8:
    // 0x269de8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269dec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269df0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269DF0u;
    SET_GPR_U32(ctx, 31, 0x269DF8u);
    ctx->pc = 0x269DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269DF0u;
            // 0x269df4: 0x24a5c568  addiu       $a1, $a1, -0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DF8u; }
        if (ctx->pc != 0x269DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DF8u; }
        if (ctx->pc != 0x269DF8u) { return; }
    }
    ctx->pc = 0x269DF8u;
label_269df8:
    // 0x269df8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x269DF8u;
    {
        const bool branch_taken_0x269df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269df8) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269E00u;
label_269e00:
    // 0x269e00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269e04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269e08: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269E08u;
    SET_GPR_U32(ctx, 31, 0x269E10u);
    ctx->pc = 0x269E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E08u;
            // 0x269e0c: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E10u; }
        if (ctx->pc != 0x269E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E10u; }
        if (ctx->pc != 0x269E10u) { return; }
    }
    ctx->pc = 0x269E10u;
label_269e10:
    // 0x269e10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x269E10u;
    {
        const bool branch_taken_0x269e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e10) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269E18u;
label_269e18:
    // 0x269e18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269e1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269e20: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269E20u;
    SET_GPR_U32(ctx, 31, 0x269E28u);
    ctx->pc = 0x269E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E20u;
            // 0x269e24: 0x24a5c578  addiu       $a1, $a1, -0x3A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E28u; }
        if (ctx->pc != 0x269E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E28u; }
        if (ctx->pc != 0x269E28u) { return; }
    }
    ctx->pc = 0x269E28u;
label_269e28:
    // 0x269e28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269E28u;
    {
        const bool branch_taken_0x269e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e28) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269E30u;
label_269e30:
    // 0x269e30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269e34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269e38: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269E38u;
    SET_GPR_U32(ctx, 31, 0x269E40u);
    ctx->pc = 0x269E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E38u;
            // 0x269e3c: 0x24a5c580  addiu       $a1, $a1, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E40u; }
        if (ctx->pc != 0x269E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E40u; }
        if (ctx->pc != 0x269E40u) { return; }
    }
    ctx->pc = 0x269E40u;
label_269e40:
    // 0x269e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x269E40u;
    {
        const bool branch_taken_0x269e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e40) {
            ctx->pc = 0x269E58u;
            goto label_269e58;
        }
    }
    ctx->pc = 0x269E48u;
label_269e48:
    // 0x269e48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269e4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x269e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269e50: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x269E50u;
    SET_GPR_U32(ctx, 31, 0x269E58u);
    ctx->pc = 0x269E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E50u;
            // 0x269e54: 0x24a5c588  addiu       $a1, $a1, -0x3A78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E58u; }
        if (ctx->pc != 0x269E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E58u; }
        if (ctx->pc != 0x269E58u) { return; }
    }
    ctx->pc = 0x269E58u;
label_269e58:
    // 0x269e58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x269e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x269e5c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x269e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x269e60: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x269E60u;
    {
        const bool branch_taken_0x269e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269E60u;
            // 0x269e64: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e60) {
            ctx->pc = 0x269D2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269d2c;
        }
    }
    ctx->pc = 0x269E68u;
    // 0x269e68: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x269e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x269e6c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x269e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x269e70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x269e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x269e74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x269e78: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x269E78u;
    SET_GPR_U32(ctx, 31, 0x269E80u);
    ctx->pc = 0x269E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E78u;
            // 0x269e7c: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E80u; }
        if (ctx->pc != 0x269E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E80u; }
        if (ctx->pc != 0x269E80u) { return; }
    }
    ctx->pc = 0x269E80u;
label_269e80:
    // 0x269e80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x269E80u;
    {
        const bool branch_taken_0x269e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e80) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269E88u;
label_269e88:
    // 0x269e88: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x269E88u;
    SET_GPR_U32(ctx, 31, 0x269E90u);
    ctx->pc = 0x219F10u;
    if (runtime->hasFunction(0x219F10u)) {
        auto targetFn = runtime->lookupFunction(0x219F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E90u; }
        if (ctx->pc != 0x269E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishPrize__Fv_0x219f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E90u; }
        if (ctx->pc != 0x269E90u) { return; }
    }
    ctx->pc = 0x269E90u;
label_269e90:
    // 0x269e90: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x269E90u;
    SET_GPR_U32(ctx, 31, 0x269E98u);
    ctx->pc = 0x269E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269E90u;
            // 0x269e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (runtime->hasFunction(0x219F30u)) {
        auto targetFn = runtime->lookupFunction(0x219F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E98u; }
        if (ctx->pc != 0x269E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFishPrize__Fi_0x219f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E98u; }
        if (ctx->pc != 0x269E98u) { return; }
    }
    ctx->pc = 0x269E98u;
label_269e98:
    // 0x269e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269E98u;
    {
        const bool branch_taken_0x269e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e98) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269EA0u;
label_269ea0:
    // 0x269ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269EA0u;
    {
        const bool branch_taken_0x269ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269EA0u;
            // 0x269ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ea0) {
            ctx->pc = 0x269EACu;
            goto label_269eac;
        }
    }
    ctx->pc = 0x269EA8u;
label_269ea8:
    // 0x269ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269eac:
    // 0x269eac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x269eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_269eb0:
    // 0x269eb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x269eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x269eb4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x269eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269eb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x269eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269ebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x269ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269ec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x269ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x269EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269EC4u;
            // 0x269ec8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269ECCu;
}
