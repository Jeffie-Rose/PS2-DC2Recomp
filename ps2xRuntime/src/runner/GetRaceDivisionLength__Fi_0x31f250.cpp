#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRaceDivisionLength__Fi
// Address: 0x31f250 - 0x31f2a0
void GetRaceDivisionLength__Fi_0x31f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRaceDivisionLength__Fi_0x31f250");
#endif

    ctx->pc = 0x31f250u;

    // 0x31f250: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F250u;
    {
        const bool branch_taken_0x31f250 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x31f250) {
            ctx->pc = 0x31F264u;
            goto label_31f264;
        }
    }
    ctx->pc = 0x31F258u;
    // 0x31f258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31f258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f25c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31F25Cu;
    {
        const bool branch_taken_0x31f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f25c) {
            ctx->pc = 0x31F298u;
            goto label_31f298;
        }
    }
    ctx->pc = 0x31F264u;
label_31f264:
    // 0x31f264: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F264u;
    {
        const bool branch_taken_0x31f264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F264u;
            // 0x31f268: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f264) {
            ctx->pc = 0x31F27Cu;
            goto label_31f27c;
        }
    }
    ctx->pc = 0x31F26Cu;
    // 0x31f26c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31f270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31F274u;
    {
        const bool branch_taken_0x31f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f274) {
            ctx->pc = 0x31F298u;
            goto label_31f298;
        }
    }
    ctx->pc = 0x31F27Cu;
label_31f27c:
    // 0x31f27c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F27Cu;
    {
        const bool branch_taken_0x31f27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F27Cu;
            // 0x31f280: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f27c) {
            ctx->pc = 0x31F294u;
            goto label_31f294;
        }
    }
    ctx->pc = 0x31F284u;
    // 0x31f284: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31f288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f28c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31F28Cu;
    {
        const bool branch_taken_0x31f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f28c) {
            ctx->pc = 0x31F298u;
            goto label_31f298;
        }
    }
    ctx->pc = 0x31F294u;
label_31f294:
    // 0x31f294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31f298:
    // 0x31f298: 0x3e00008  jr          $ra
    ctx->pc = 0x31F298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F2A0u;
}
