#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGeoMapLimitHeight__Fi
// Address: 0x2da530 - 0x2da59c
void GetGeoMapLimitHeight__Fi_0x2da530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGeoMapLimitHeight__Fi_0x2da530");
#endif

    ctx->pc = 0x2da530u;

    // 0x2da530: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA530u;
    {
        const bool branch_taken_0x2da530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA530u;
            // 0x2da534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da530) {
            ctx->pc = 0x2DA548u;
            goto label_2da548;
        }
    }
    ctx->pc = 0x2DA538u;
    // 0x2da538: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2da538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2da53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da540: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DA540u;
    {
        const bool branch_taken_0x2da540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da540) {
            ctx->pc = 0x2DA594u;
            goto label_2da594;
        }
    }
    ctx->pc = 0x2DA548u;
label_2da548:
    // 0x2da548: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA548u;
    {
        const bool branch_taken_0x2da548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA548u;
            // 0x2da54c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da548) {
            ctx->pc = 0x2DA560u;
            goto label_2da560;
        }
    }
    ctx->pc = 0x2DA550u;
    // 0x2da550: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x2da550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x2da554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da558: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DA558u;
    {
        const bool branch_taken_0x2da558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da558) {
            ctx->pc = 0x2DA594u;
            goto label_2da594;
        }
    }
    ctx->pc = 0x2DA560u;
label_2da560:
    // 0x2da560: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA560u;
    {
        const bool branch_taken_0x2da560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA560u;
            // 0x2da564: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da560) {
            ctx->pc = 0x2DA578u;
            goto label_2da578;
        }
    }
    ctx->pc = 0x2DA568u;
    // 0x2da568: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2da568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2da56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da570: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA570u;
    {
        const bool branch_taken_0x2da570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da570) {
            ctx->pc = 0x2DA594u;
            goto label_2da594;
        }
    }
    ctx->pc = 0x2DA578u;
label_2da578:
    // 0x2da578: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA578u;
    {
        const bool branch_taken_0x2da578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA578u;
            // 0x2da57c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da578) {
            ctx->pc = 0x2DA590u;
            goto label_2da590;
        }
    }
    ctx->pc = 0x2DA580u;
    // 0x2da580: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2da580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2da584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da588: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA588u;
    {
        const bool branch_taken_0x2da588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da588) {
            ctx->pc = 0x2DA594u;
            goto label_2da594;
        }
    }
    ctx->pc = 0x2DA590u;
label_2da590:
    // 0x2da590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da594:
    // 0x2da594: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA59Cu;
}
