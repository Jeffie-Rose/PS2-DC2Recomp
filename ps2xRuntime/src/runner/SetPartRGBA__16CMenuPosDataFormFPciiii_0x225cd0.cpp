#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartRGBA__16CMenuPosDataFormFPciiii
// Address: 0x225cd0 - 0x225d30
void SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0");
#endif

    switch (ctx->pc) {
        case 0x225cfcu: goto label_225cfc;
        default: break;
    }

    ctx->pc = 0x225cd0u;

    // 0x225cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225cd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x225cd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x225cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225ce0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x225ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225ce8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x225ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225cf0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x225cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cf4: 0xc089664  jal         func_225990
    ctx->pc = 0x225CF4u;
    SET_GPR_U32(ctx, 31, 0x225CFCu);
    ctx->pc = 0x225CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225CF4u;
            // 0x225cf8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225CFCu; }
        if (ctx->pc != 0x225CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225CFCu; }
        if (ctx->pc != 0x225CFCu) { return; }
    }
    ctx->pc = 0x225CFCu;
label_225cfc:
    // 0x225cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225CFCu;
    {
        const bool branch_taken_0x225cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225cfc) {
            ctx->pc = 0x225D14u;
            goto label_225d14;
        }
    }
    ctx->pc = 0x225D04u;
    // 0x225d04: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x225d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x225d08: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x225d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x225d0c: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x225d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x225d10: 0xa050000a  sb          $s0, 0xA($v0)
    ctx->pc = 0x225d10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 16));
label_225d14:
    // 0x225d14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x225d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225d28: 0x3e00008  jr          $ra
    ctx->pc = 0x225D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225D28u;
            // 0x225d2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225D30u;
}
