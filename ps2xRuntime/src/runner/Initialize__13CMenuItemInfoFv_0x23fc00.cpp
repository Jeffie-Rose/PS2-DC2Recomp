#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CMenuItemInfoFv
// Address: 0x23fc00 - 0x23fcec
void Initialize__13CMenuItemInfoFv_0x23fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CMenuItemInfoFv_0x23fc00");
#endif

    switch (ctx->pc) {
        case 0x23fc50u: goto label_23fc50;
        default: break;
    }

    ctx->pc = 0x23fc00u;

    // 0x23fc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fc04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fc08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23fc0c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x23fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x23fc10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fc14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23fc18: 0xa4800110  sh          $zero, 0x110($a0)
    ctx->pc = 0x23fc18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc20: 0xa4800112  sh          $zero, 0x112($a0)
    ctx->pc = 0x23fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc24: 0xa4800114  sh          $zero, 0x114($a0)
    ctx->pc = 0x23fc24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 276), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc28: 0xa4800116  sh          $zero, 0x116($a0)
    ctx->pc = 0x23fc28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 278), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc2c: 0xa4800118  sh          $zero, 0x118($a0)
    ctx->pc = 0x23fc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc30: 0xa4820118  sh          $v0, 0x118($a0)
    ctx->pc = 0x23fc30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x23fc34: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23fc38: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23fc38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23fc3c: 0x84224d98  lh          $v0, 0x4D98($at)
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x23fc40: 0xa482011a  sh          $v0, 0x11A($a0)
    ctx->pc = 0x23fc40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x23fc44: 0xac80017c  sw          $zero, 0x17C($a0)
    ctx->pc = 0x23fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 0));
    // 0x23fc48: 0xc08ff3c  jal         func_23FCF0
    ctx->pc = 0x23FC48u;
    SET_GPR_U32(ctx, 31, 0x23FC50u);
    ctx->pc = 0x23FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC48u;
            // 0x23fc4c: 0xac8000f8  sw          $zero, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FCF0u;
    if (runtime->hasFunction(0x23FCF0u)) {
        auto targetFn = runtime->lookupFunction(0x23FCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FC50u; }
        if (ctx->pc != 0x23FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEquipListNo__13CMenuItemInfoFi_0x23fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FC50u; }
        if (ctx->pc != 0x23FC50u) { return; }
    }
    ctx->pc = 0x23FC50u;
label_23fc50:
    // 0x23fc50: 0xa6000138  sh          $zero, 0x138($s0)
    ctx->pc = 0x23fc50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc54: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fc58: 0xa200016c  sb          $zero, 0x16C($s0)
    ctx->pc = 0x23fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fc60: 0xa200016d  sb          $zero, 0x16D($s0)
    ctx->pc = 0x23fc60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 365), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc64: 0xa6040176  sh          $a0, 0x176($s0)
    ctx->pc = 0x23fc64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 374), (uint16_t)GPR_U32(ctx, 4));
    // 0x23fc68: 0xa6040178  sh          $a0, 0x178($s0)
    ctx->pc = 0x23fc68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 4));
    // 0x23fc6c: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x23fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x23fc70: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x23fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x23fc74: 0xa200013a  sb          $zero, 0x13A($s0)
    ctx->pc = 0x23fc74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc78: 0xa200016f  sb          $zero, 0x16F($s0)
    ctx->pc = 0x23fc78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 367), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc7c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x23fc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc80: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x23fc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fc84: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x23fc84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc88: 0xa2000170  sb          $zero, 0x170($s0)
    ctx->pc = 0x23fc88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc8c: 0xa6040172  sh          $a0, 0x172($s0)
    ctx->pc = 0x23fc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 370), (uint16_t)GPR_U32(ctx, 4));
    // 0x23fc90: 0xa6000174  sh          $zero, 0x174($s0)
    ctx->pc = 0x23fc90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 372), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fc94: 0xa200016e  sb          $zero, 0x16E($s0)
    ctx->pc = 0x23fc94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 366), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc98: 0xa2000130  sb          $zero, 0x130($s0)
    ctx->pc = 0x23fc98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc9c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x23fc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fca0: 0xa2000131  sb          $zero, 0x131($s0)
    ctx->pc = 0x23fca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 305), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fca4: 0xa6000122  sh          $zero, 0x122($s0)
    ctx->pc = 0x23fca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fca8: 0xa2000132  sb          $zero, 0x132($s0)
    ctx->pc = 0x23fca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 306), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fcac: 0xa6000124  sh          $zero, 0x124($s0)
    ctx->pc = 0x23fcacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fcb0: 0xa2000133  sb          $zero, 0x133($s0)
    ctx->pc = 0x23fcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 307), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fcb4: 0xa6000126  sh          $zero, 0x126($s0)
    ctx->pc = 0x23fcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fcb8: 0xa2000134  sb          $zero, 0x134($s0)
    ctx->pc = 0x23fcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 308), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fcbc: 0xa6000128  sh          $zero, 0x128($s0)
    ctx->pc = 0x23fcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fcc0: 0xa2000135  sb          $zero, 0x135($s0)
    ctx->pc = 0x23fcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 309), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fcc4: 0xa600012a  sh          $zero, 0x12A($s0)
    ctx->pc = 0x23fcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 298), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fcc8: 0xa2000136  sb          $zero, 0x136($s0)
    ctx->pc = 0x23fcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 310), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fccc: 0xa600012c  sh          $zero, 0x12C($s0)
    ctx->pc = 0x23fcccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fcd0: 0xa2000137  sb          $zero, 0x137($s0)
    ctx->pc = 0x23fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 311), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fcd4: 0xa600012e  sh          $zero, 0x12E($s0)
    ctx->pc = 0x23fcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 302), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fcd8: 0xa2000160  sb          $zero, 0x160($s0)
    ctx->pc = 0x23fcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 352), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fcdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fce4: 0x3e00008  jr          $ra
    ctx->pc = 0x23FCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCE4u;
            // 0x23fce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23FCECu;
}
