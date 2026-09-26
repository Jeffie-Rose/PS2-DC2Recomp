#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CombineParam__Fii
// Address: 0x2143d0 - 0x214458
void CombineParam__Fii_0x2143d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CombineParam__Fii_0x2143d0");
#endif

    ctx->pc = 0x2143d0u;

    // 0x2143d0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2143d4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2143D4u;
    {
        const bool branch_taken_0x2143d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2143D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2143D4u;
            // 0x2143d8: 0x3c029249  lui         $v0, 0x9249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143d4) {
            ctx->pc = 0x21440Cu;
            goto label_21440c;
        }
    }
    ctx->pc = 0x2143DCu;
    // 0x2143dc: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x2143dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x2143e0: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2143e4: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x2143e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x2143e8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x2143e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2143ec: 0x0  nop
    ctx->pc = 0x2143ecu;
    // NOP
    // 0x2143f0: 0x0  nop
    ctx->pc = 0x2143f0u;
    // NOP
    // 0x2143f4: 0x1010  mfhi        $v0
    ctx->pc = 0x2143f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2143f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2143fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2143fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x214400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214404: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x214404u;
    {
        const bool branch_taken_0x214404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214404u;
            // 0x214408: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214404) {
            ctx->pc = 0x214434u;
            goto label_214434;
        }
    }
    ctx->pc = 0x21440Cu;
label_21440c:
    // 0x21440c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x21440cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x214410: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x214410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x214414: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x214414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x214418: 0x0  nop
    ctx->pc = 0x214418u;
    // NOP
    // 0x21441c: 0x0  nop
    ctx->pc = 0x21441cu;
    // NOP
    // 0x214420: 0x1010  mfhi        $v0
    ctx->pc = 0x214420u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x214424: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x214424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x214428: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x214428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x21442c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214430: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x214430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_214434:
    // 0x214434: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214434u;
    {
        const bool branch_taken_0x214434 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214434u;
            // 0x214438: 0x28430064  slti        $v1, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214434) {
            ctx->pc = 0x214444u;
            goto label_214444;
        }
    }
    ctx->pc = 0x21443Cu;
    // 0x21443c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21443cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214440: 0x28430064  slti        $v1, $v0, 0x64
    ctx->pc = 0x214440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_214444:
    // 0x214444: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x214444u;
    {
        const bool branch_taken_0x214444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x214444) {
            ctx->pc = 0x214450u;
            goto label_214450;
        }
    }
    ctx->pc = 0x21444Cu;
    // 0x21444c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x21444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_214450:
    // 0x214450: 0x3e00008  jr          $ra
    ctx->pc = 0x214450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214458u;
}
