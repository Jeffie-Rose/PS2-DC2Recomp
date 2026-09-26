#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReloadTexture__14mgCDrawManagerFiP13sceVif1Packet
// Address: 0x135660 - 0x13571c
void ReloadTexture__14mgCDrawManagerFiP13sceVif1Packet_0x135660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadTexture__14mgCDrawManagerFiP13sceVif1Packet_0x135660");
#endif

    switch (ctx->pc) {
        case 0x1356e8u: goto label_1356e8;
        case 0x1356fcu: goto label_1356fc;
        default: break;
    }

    ctx->pc = 0x135660u;

    // 0x135660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13566c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135674: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x135674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135678: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x135678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13567c: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x13567cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x135680: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x135680u;
    {
        const bool branch_taken_0x135680 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x135680) {
            ctx->pc = 0x135698u;
            goto label_135698;
        }
    }
    ctx->pc = 0x135688u;
    // 0x135688: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x135688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13568c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x13568cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x135690: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135690u;
    {
        const bool branch_taken_0x135690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135690) {
            ctx->pc = 0x1356A4u;
            goto label_1356a4;
        }
    }
    ctx->pc = 0x135698u;
label_135698:
    // 0x135698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x135698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13569c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13569Cu;
    {
        const bool branch_taken_0x13569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13569c) {
            ctx->pc = 0x135700u;
            goto label_135700;
        }
    }
    ctx->pc = 0x1356A4u;
label_1356a4:
    // 0x1356a4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1356a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1356a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1356ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1356ACu;
    {
        const bool branch_taken_0x1356ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1356ac) {
            ctx->pc = 0x1356C8u;
            goto label_1356c8;
        }
    }
    ctx->pc = 0x1356B4u;
    // 0x1356b4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1356b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1356b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1356b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1356bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1356bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1356c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1356c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1356c4: 0x0  nop
    ctx->pc = 0x1356c4u;
    // NOP
label_1356c8:
    // 0x1356c8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1356C8u;
    {
        const bool branch_taken_0x1356c8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1356c8) {
            ctx->pc = 0x1356DCu;
            goto label_1356dc;
        }
    }
    ctx->pc = 0x1356D0u;
    // 0x1356d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1356d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1356D4u;
    {
        const bool branch_taken_0x1356d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1356d4) {
            ctx->pc = 0x135700u;
            goto label_135700;
        }
    }
    ctx->pc = 0x1356DCu;
label_1356dc:
    // 0x1356dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1356dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356e0: 0xc041ace  jal         func_106B38
    ctx->pc = 0x1356E0u;
    SET_GPR_U32(ctx, 31, 0x1356E8u);
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1356E8u; }
        if (ctx->pc != 0x1356E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1356E8u; }
        if (ctx->pc != 0x1356E8u) { return; }
    }
    ctx->pc = 0x1356E8u;
label_1356e8:
    // 0x1356e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1356e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1356ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1356f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356f4: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1356F4u;
    SET_GPR_U32(ctx, 31, 0x1356FCu);
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1356FCu; }
        if (ctx->pc != 0x1356FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1356FCu; }
        if (ctx->pc != 0x1356FCu) { return; }
    }
    ctx->pc = 0x1356FCu;
label_1356fc:
    // 0x1356fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1356fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135700:
    // 0x135700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13570c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13570cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135710: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135714: 0x3e00008  jr          $ra
    ctx->pc = 0x135714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13571Cu;
}
