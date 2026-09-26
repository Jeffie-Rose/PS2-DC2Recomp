#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharaStatusAttirbute__16CUserDataManagerFiUii
// Address: 0x19c0c0 - 0x19c190
void SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0");
#endif

    switch (ctx->pc) {
        case 0x19c0e4u: goto label_19c0e4;
        default: break;
    }

    ctx->pc = 0x19c0c0u;

    // 0x19c0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c0c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c0c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c0cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c0d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19c0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c0d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19c0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0dc: 0xc067018  jal         func_19C060
    ctx->pc = 0x19C0DCu;
    SET_GPR_U32(ctx, 31, 0x19C0E4u);
    ctx->pc = 0x19C0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0DCu;
            // 0x19c0e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C060u;
    if (runtime->hasFunction(0x19C060u)) {
        auto targetFn = runtime->lookupFunction(0x19C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0E4u; }
        if (ctx->pc != 0x19C0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbutePtr__16CUserDataManagerFi_0x19c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0E4u; }
        if (ctx->pc != 0x19C0E4u) { return; }
    }
    ctx->pc = 0x19C0E4u;
label_19c0e4:
    // 0x19c0e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C0E4u;
    {
        const bool branch_taken_0x19c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0E4u;
            // 0x19c0e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0e4) {
            ctx->pc = 0x19C0F4u;
            goto label_19c0f4;
        }
    }
    ctx->pc = 0x19C0ECu;
    // 0x19c0ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19C0ECu;
    {
        const bool branch_taken_0x19c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0ECu;
            // 0x19c0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0ec) {
            ctx->pc = 0x19C178u;
            goto label_19c178;
        }
    }
    ctx->pc = 0x19C0F4u;
label_19c0f4:
    // 0x19c0f4: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C0F4u;
    {
        const bool branch_taken_0x19c0f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0F4u;
            // 0x19c0f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0f4) {
            ctx->pc = 0x19C104u;
            goto label_19c104;
        }
    }
    ctx->pc = 0x19C0FCu;
    // 0x19c0fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19C0FCu;
    {
        const bool branch_taken_0x19c0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0FCu;
            // 0x19c100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0fc) {
            ctx->pc = 0x19C178u;
            goto label_19c178;
        }
    }
    ctx->pc = 0x19C104u;
label_19c104:
    // 0x19c104: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C104u;
    {
        const bool branch_taken_0x19c104 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c104) {
            ctx->pc = 0x19C120u;
            goto label_19c120;
        }
    }
    ctx->pc = 0x19C10Cu;
    // 0x19c10c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19c10cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c110: 0x2002027  not         $a0, $s0
    ctx->pc = 0x19c110u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x19c114: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19c114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19c118: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19C118u;
    {
        const bool branch_taken_0x19c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C118u;
            // 0x19c11c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c118) {
            ctx->pc = 0x19C170u;
            goto label_19c170;
        }
    }
    ctx->pc = 0x19C120u;
label_19c120:
    // 0x19c120: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19c120u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c124: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x19c124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x19c128: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C128u;
    {
        const bool branch_taken_0x19c128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C128u;
            // 0x19c12c: 0x32030010  andi        $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c128) {
            ctx->pc = 0x19C13Cu;
            goto label_19c13c;
        }
    }
    ctx->pc = 0x19C130u;
    // 0x19c130: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x19c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x19c134: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x19c138: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x19c138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_19c13c:
    // 0x19c13c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C13Cu;
    {
        const bool branch_taken_0x19c13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c13c) {
            ctx->pc = 0x19C164u;
            goto label_19c164;
        }
    }
    ctx->pc = 0x19C144u;
    // 0x19c144: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19c144u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c148: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x19c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x19c14c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x19c14cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x19c150: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x19c150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x19c154: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x19c154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c158: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19c158u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c15c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x19c15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x19c160: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x19c160u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_19c164:
    // 0x19c164: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19c164u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c168: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x19c168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x19c16c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x19c16cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_19c170:
    // 0x19c170: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19c170u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c174: 0x0  nop
    ctx->pc = 0x19c174u;
    // NOP
label_19c178:
    // 0x19c178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19c178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c17c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c188: 0x3e00008  jr          $ra
    ctx->pc = 0x19C188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C188u;
            // 0x19c18c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C190u;
}
