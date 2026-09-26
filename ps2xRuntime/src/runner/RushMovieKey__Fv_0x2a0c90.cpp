#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RushMovieKey__Fv
// Address: 0x2a0c90 - 0x2a0eac
void RushMovieKey__Fv_0x2a0c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RushMovieKey__Fv_0x2a0c90");
#endif

    switch (ctx->pc) {
        case 0x2a0ce0u: goto label_2a0ce0;
        case 0x2a0cfcu: goto label_2a0cfc;
        case 0x2a0d10u: goto label_2a0d10;
        case 0x2a0d24u: goto label_2a0d24;
        case 0x2a0d5cu: goto label_2a0d5c;
        case 0x2a0d80u: goto label_2a0d80;
        case 0x2a0da8u: goto label_2a0da8;
        case 0x2a0dc4u: goto label_2a0dc4;
        case 0x2a0de0u: goto label_2a0de0;
        case 0x2a0df0u: goto label_2a0df0;
        case 0x2a0e94u: goto label_2a0e94;
        default: break;
    }

    ctx->pc = 0x2a0c90u;

    // 0x2a0c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a0c94: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0c98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a0c9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0ca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0ca8: 0x8c236250  lw          $v1, 0x6250($at)
    ctx->pc = 0x2a0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25168)));
    // 0x2a0cac: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2A0CACu;
    {
        const bool branch_taken_0x2a0cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0cac) {
            ctx->pc = 0x2A0E5Cu;
            goto label_2a0e5c;
        }
    }
    ctx->pc = 0x2A0CB4u;
    // 0x2a0cb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0cb8: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2A0CB8u;
    {
        const bool branch_taken_0x2a0cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CB8u;
            // 0x2a0cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cb8) {
            ctx->pc = 0x2A0DD4u;
            goto label_2a0dd4;
        }
    }
    ctx->pc = 0x2A0CC0u;
    // 0x2a0cc0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0CC0u;
    {
        const bool branch_taken_0x2a0cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CC0u;
            // 0x2a0cc4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cc0) {
            ctx->pc = 0x2A0CE8u;
            goto label_2a0ce8;
        }
    }
    ctx->pc = 0x2A0CC8u;
    // 0x2a0cc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0CC8u;
    {
        const bool branch_taken_0x2a0cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CC8u;
            // 0x2a0ccc: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cc8) {
            ctx->pc = 0x2A0CD8u;
            goto label_2a0cd8;
        }
    }
    ctx->pc = 0x2A0CD0u;
    // 0x2a0cd0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2A0CD0u;
    {
        const bool branch_taken_0x2a0cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0cd0) {
            ctx->pc = 0x2A0E5Cu;
            goto label_2a0e5c;
        }
    }
    ctx->pc = 0x2A0CD8u;
label_2a0cd8:
    // 0x2a0cd8: 0xc0a82dc  jal         func_2A0B70
    ctx->pc = 0x2A0CD8u;
    SET_GPR_U32(ctx, 31, 0x2A0CE0u);
    ctx->pc = 0x2A0CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CD8u;
            // 0x2a0cdc: 0x84246256  lh          $a0, 0x6256($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25174)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0B70u;
    if (runtime->hasFunction(0x2A0B70u)) {
        auto targetFn = runtime->lookupFunction(0x2A0B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CE0u; }
        if (ctx->pc != 0x2A0CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitRushMovie__Fi_0x2a0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CE0u; }
        if (ctx->pc != 0x2A0CE0u) { return; }
    }
    ctx->pc = 0x2A0CE0u;
label_2a0ce0:
    // 0x2a0ce0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2A0CE0u;
    {
        const bool branch_taken_0x2a0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ce0) {
            ctx->pc = 0x2A0E5Cu;
            goto label_2a0e5c;
        }
    }
    ctx->pc = 0x2A0CE8u;
label_2a0ce8:
    // 0x2a0ce8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2a0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a0cec: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2a0cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cf4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A0CF4u;
    SET_GPR_U32(ctx, 31, 0x2A0CFCu);
    ctx->pc = 0x2A0CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CF4u;
            // 0x2a0cf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CFCu; }
        if (ctx->pc != 0x2A0CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CFCu; }
        if (ctx->pc != 0x2A0CFCu) { return; }
    }
    ctx->pc = 0x2A0CFCu;
label_2a0cfc:
    // 0x2a0cfc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A0CFCu;
    {
        const bool branch_taken_0x2a0cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CFCu;
            // 0x2a0d00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cfc) {
            ctx->pc = 0x2A0D2Cu;
            goto label_2a0d2c;
        }
    }
    ctx->pc = 0x2A0D04u;
    // 0x2a0d04: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a0d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a0d08: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A0D08u;
    SET_GPR_U32(ctx, 31, 0x2A0D10u);
    ctx->pc = 0x2A0D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D08u;
            // 0x2a0d0c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D10u; }
        if (ctx->pc != 0x2A0D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D10u; }
        if (ctx->pc != 0x2A0D10u) { return; }
    }
    ctx->pc = 0x2A0D10u;
label_2a0d10:
    // 0x2a0d10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0D10u;
    {
        const bool branch_taken_0x2a0d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D10u;
            // 0x2a0d14: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d10) {
            ctx->pc = 0x2A0D2Cu;
            goto label_2a0d2c;
        }
    }
    ctx->pc = 0x2A0D18u;
    // 0x2a0d18: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a0d1c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D24u);
    ctx->pc = 0x2A0D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D1Cu;
            // 0x2a0d20: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D24u; }
        if (ctx->pc != 0x2A0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D24u; }
        if (ctx->pc != 0x2A0D24u) { return; }
    }
    ctx->pc = 0x2A0D24u;
label_2a0d24:
    // 0x2a0d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0D24u;
    {
        const bool branch_taken_0x2a0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d24) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0D2Cu;
label_2a0d2c:
    // 0x2a0d2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a0d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0d30: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0d34: 0xa0316264  sb          $s1, 0x6264($at)
    ctx->pc = 0x2a0d34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25188), (uint8_t)GPR_U32(ctx, 17));
    // 0x2a0d38: 0xa3919974  sb          $s1, -0x668C($gp)
    ctx->pc = 0x2a0d38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941044), (uint8_t)GPR_U32(ctx, 17));
label_2a0d3c:
    // 0x2a0d3c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0d40: 0x84226254  lh          $v0, 0x6254($at)
    ctx->pc = 0x2a0d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25172)));
    // 0x2a0d44: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0D44u;
    {
        const bool branch_taken_0x2a0d44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a0d44) {
            ctx->pc = 0x2A0D54u;
            goto label_2a0d54;
        }
    }
    ctx->pc = 0x2A0D4Cu;
    // 0x2a0d4c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0D4Cu;
    {
        const bool branch_taken_0x2a0d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d4c) {
            ctx->pc = 0x2A0D64u;
            goto label_2a0d64;
        }
    }
    ctx->pc = 0x2A0D54u;
label_2a0d54:
    // 0x2a0d54: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x2A0D54u;
    SET_GPR_U32(ctx, 31, 0x2A0D5Cu);
    ctx->pc = 0x2A0D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D54u;
            // 0x2a0d58: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D5Cu; }
        if (ctx->pc != 0x2A0D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCheck__6CMovieFv_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D5Cu; }
        if (ctx->pc != 0x2A0D5Cu) { return; }
    }
    ctx->pc = 0x2A0D5Cu;
label_2a0d5c:
    // 0x2a0d5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0D5Cu;
    {
        const bool branch_taken_0x2a0d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d5c) {
            ctx->pc = 0x2A0D68u;
            goto label_2a0d68;
        }
    }
    ctx->pc = 0x2A0D64u;
label_2a0d64:
    // 0x2a0d64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0d68:
    // 0x2a0d68: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x2a0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x2a0d6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0D6Cu;
    {
        const bool branch_taken_0x2a0d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D6Cu;
            // 0x2a0d70: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d6c) {
            ctx->pc = 0x2A0D94u;
            goto label_2a0d94;
        }
    }
    ctx->pc = 0x2A0D74u;
    // 0x2a0d74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a0d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a0d78: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A0D78u;
    SET_GPR_U32(ctx, 31, 0x2A0D80u);
    ctx->pc = 0x2A0D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D78u;
            // 0x2a0d7c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D80u; }
        if (ctx->pc != 0x2A0D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D80u; }
        if (ctx->pc != 0x2A0D80u) { return; }
    }
    ctx->pc = 0x2A0D80u;
label_2a0d80:
    // 0x2a0d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D80u;
    {
        const bool branch_taken_0x2a0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d80) {
            ctx->pc = 0x2A0D94u;
            goto label_2a0d94;
        }
    }
    ctx->pc = 0x2A0D88u;
    // 0x2a0d88: 0x83829a08  lb          $v0, -0x65F8($gp)
    ctx->pc = 0x2a0d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941192)));
    // 0x2a0d8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a0d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a0d90: 0xa3829a08  sb          $v0, -0x65F8($gp)
    ctx->pc = 0x2a0d90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941192), (uint8_t)GPR_U32(ctx, 2));
label_2a0d94:
    // 0x2a0d94: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A0D94u;
    {
        const bool branch_taken_0x2a0d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d94) {
            ctx->pc = 0x2A0E5Cu;
            goto label_2a0e5c;
        }
    }
    ctx->pc = 0x2A0D9Cu;
    // 0x2a0d9c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0da0: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x2A0DA0u;
    SET_GPR_U32(ctx, 31, 0x2A0DA8u);
    ctx->pc = 0x2A0DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DA0u;
            // 0x2a0da4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DA8u; }
        if (ctx->pc != 0x2A0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DA8u; }
        if (ctx->pc != 0x2A0DA8u) { return; }
    }
    ctx->pc = 0x2A0DA8u;
label_2a0da8:
    // 0x2a0da8: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0dac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a0dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0db0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2a0db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a0db4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a0db4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a0db8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a0db8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a0dbc: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A0DBCu;
    SET_GPR_U32(ctx, 31, 0x2A0DC4u);
    ctx->pc = 0x2A0DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DBCu;
            // 0x2a0dc0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DC4u; }
        if (ctx->pc != 0x2A0DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DC4u; }
        if (ctx->pc != 0x2A0DC4u) { return; }
    }
    ctx->pc = 0x2A0DC4u;
label_2a0dc4:
    // 0x2a0dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0dc8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0dcc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A0DCCu;
    {
        const bool branch_taken_0x2a0dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DCCu;
            // 0x2a0dd0: 0xac226250  sw          $v0, 0x6250($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0dcc) {
            ctx->pc = 0x2A0E5Cu;
            goto label_2a0e5c;
        }
    }
    ctx->pc = 0x2A0DD4u;
label_2a0dd4:
    // 0x2a0dd4: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0dd8: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A0DD8u;
    SET_GPR_U32(ctx, 31, 0x2A0DE0u);
    ctx->pc = 0x2A0DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DD8u;
            // 0x2a0ddc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DE0u; }
        if (ctx->pc != 0x2A0DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DE0u; }
        if (ctx->pc != 0x2A0DE0u) { return; }
    }
    ctx->pc = 0x2A0DE0u;
label_2a0de0:
    // 0x2a0de0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0DE0u;
    {
        const bool branch_taken_0x2a0de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0de0) {
            ctx->pc = 0x2A0DF8u;
            goto label_2a0df8;
        }
    }
    ctx->pc = 0x2A0DE8u;
    // 0x2a0de8: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x2A0DE8u;
    SET_GPR_U32(ctx, 31, 0x2A0DF0u);
    ctx->pc = 0x2A0DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DE8u;
            // 0x2a0dec: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DF0u; }
        if (ctx->pc != 0x2A0DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCheck__6CMovieFv_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DF0u; }
        if (ctx->pc != 0x2A0DF0u) { return; }
    }
    ctx->pc = 0x2A0DF0u;
label_2a0df0:
    // 0x2a0df0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A0DF0u;
    {
        const bool branch_taken_0x2a0df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0df0) {
            ctx->pc = 0x2A0E5Cu;
            goto label_2a0e5c;
        }
    }
    ctx->pc = 0x2A0DF8u;
label_2a0df8:
    // 0x2a0df8: 0x83829970  lb          $v0, -0x6690($gp)
    ctx->pc = 0x2a0df8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941040)));
    // 0x2a0dfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0e00: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0e04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A0E04u;
    {
        const bool branch_taken_0x2a0e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E04u;
            // 0x2a0e08: 0xac236250  sw          $v1, 0x6250($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e04) {
            ctx->pc = 0x2A0E40u;
            goto label_2a0e40;
        }
    }
    ctx->pc = 0x2A0E0Cu;
    // 0x2a0e0c: 0x83849974  lb          $a0, -0x668C($gp)
    ctx->pc = 0x2a0e0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941044)));
    // 0x2a0e10: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0E10u;
    {
        const bool branch_taken_0x2a0e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E10u;
            // 0x2a0e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e10) {
            ctx->pc = 0x2A0E34u;
            goto label_2a0e34;
        }
    }
    ctx->pc = 0x2A0E18u;
    // 0x2a0e18: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2a0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2a0e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0e20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0E20u;
    {
        const bool branch_taken_0x2a0e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E20u;
            // 0x2a0e24: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e20) {
            ctx->pc = 0x2A0E30u;
            goto label_2a0e30;
        }
    }
    ctx->pc = 0x2A0E28u;
    // 0x2a0e28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A0E28u;
    {
        const bool branch_taken_0x2a0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E28u;
            // 0x2a0e2c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e28) {
            ctx->pc = 0x2A0E9Cu;
            goto label_2a0e9c;
        }
    }
    ctx->pc = 0x2A0E30u;
label_2a0e30:
    // 0x2a0e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0e34:
    // 0x2a0e34: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0E34u;
    {
        const bool branch_taken_0x2a0e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0e34) {
            ctx->pc = 0x2A0E40u;
            goto label_2a0e40;
        }
    }
    ctx->pc = 0x2A0E3Cu;
    // 0x2a0e3c: 0xaf809978  sw          $zero, -0x6688($gp)
    ctx->pc = 0x2a0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941048), GPR_U32(ctx, 0));
label_2a0e40:
    // 0x2a0e40: 0x8383996c  lb          $v1, -0x6694($gp)
    ctx->pc = 0x2a0e40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941036)));
    // 0x2a0e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0e48: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0E48u;
    {
        const bool branch_taken_0x2a0e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0e48) {
            ctx->pc = 0x2A0E54u;
            goto label_2a0e54;
        }
    }
    ctx->pc = 0x2A0E50u;
    // 0x2a0e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a0e54:
    // 0x2a0e54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A0E54u;
    {
        const bool branch_taken_0x2a0e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e54) {
            ctx->pc = 0x2A0E98u;
            goto label_2a0e98;
        }
    }
    ctx->pc = 0x2A0E5Cu;
label_2a0e5c:
    // 0x2a0e5c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0e60: 0x84226254  lh          $v0, 0x6254($at)
    ctx->pc = 0x2a0e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25172)));
    // 0x2a0e64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a0e68: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0e6c: 0xa4226254  sh          $v0, 0x6254($at)
    ctx->pc = 0x2a0e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25172), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a0e70: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0e74: 0x84226254  lh          $v0, 0x6254($at)
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25172)));
    // 0x2a0e78: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x2a0e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
    // 0x2a0e7c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0E7Cu;
    {
        const bool branch_taken_0x2a0e7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E7Cu;
            // 0x2a0e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e7c) {
            ctx->pc = 0x2A0E98u;
            goto label_2a0e98;
        }
    }
    ctx->pc = 0x2A0E84u;
    // 0x2a0e84: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x2a0e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x2a0e88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0e8c: 0xc0a8a54  jal         func_2A2950
    ctx->pc = 0x2A0E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E94u);
    ctx->pc = 0x2A0E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E8Cu;
            // 0x2a0e90: 0x24a56258  addiu       $a1, $a1, 0x6258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2950u;
    if (runtime->hasFunction(0x2A2950u)) {
        auto targetFn = runtime->lookupFunction(0x2A2950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E94u; }
        if (ctx->pc != 0x2A0E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPushAlpha__FiPf_0x2a2950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E94u; }
        if (ctx->pc != 0x2A0E94u) { return; }
    }
    ctx->pc = 0x2A0E94u;
label_2a0e94:
    // 0x2a0e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e98:
    // 0x2a0e98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a0e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0e9c:
    // 0x2a0e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EA4u;
            // 0x2a0ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0EACu;
}
