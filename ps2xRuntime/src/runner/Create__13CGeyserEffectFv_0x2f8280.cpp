#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Create__13CGeyserEffectFv
// Address: 0x2f8280 - 0x2f835c
void Create__13CGeyserEffectFv_0x2f8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__13CGeyserEffectFv_0x2f8280");
#endif

    switch (ctx->pc) {
        case 0x2f82acu: goto label_2f82ac;
        case 0x2f82bcu: goto label_2f82bc;
        case 0x2f82ccu: goto label_2f82cc;
        case 0x2f82dcu: goto label_2f82dc;
        case 0x2f8330u: goto label_2f8330;
        default: break;
    }

    ctx->pc = 0x2f8280u;

    // 0x2f8280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f8284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f8288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f828c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f828cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8290: 0x1c600014  bgtz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F8290u;
    {
        const bool branch_taken_0x2f8290 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2F8294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8290u;
            // 0x2f8294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8290) {
            ctx->pc = 0x2F82E4u;
            goto label_2f82e4;
        }
    }
    ctx->pc = 0x2F8298u;
    // 0x2f8298: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8298u;
    {
        const bool branch_taken_0x2f8298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F829Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8298u;
            // 0x2f829c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8298) {
            ctx->pc = 0x2F82A4u;
            goto label_2f82a4;
        }
    }
    ctx->pc = 0x2F82A0u;
    // 0x2f82a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2f82a4:
    // 0x2f82a4: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2F82A4u;
    SET_GPR_U32(ctx, 31, 0x2F82ACu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82ACu; }
        if (ctx->pc != 0x2F82ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82ACu; }
        if (ctx->pc != 0x2F82ACu) { return; }
    }
    ctx->pc = 0x2F82ACu;
label_2f82ac:
    // 0x2f82ac: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2f82acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2f82b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f82b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f82b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F82B4u;
    SET_GPR_U32(ctx, 31, 0x2F82BCu);
    ctx->pc = 0x2F82B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82B4u;
            // 0x2f82b8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82BCu; }
        if (ctx->pc != 0x2F82BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82BCu; }
        if (ctx->pc != 0x2F82BCu) { return; }
    }
    ctx->pc = 0x2F82BCu;
label_2f82bc:
    // 0x2f82bc: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x2f82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x2f82c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f82c4: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2F82C4u;
    SET_GPR_U32(ctx, 31, 0x2F82CCu);
    ctx->pc = 0x2F82C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82C4u;
            // 0x2f82c8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82CCu; }
        if (ctx->pc != 0x2F82CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82CCu; }
        if (ctx->pc != 0x2F82CCu) { return; }
    }
    ctx->pc = 0x2F82CCu;
label_2f82cc:
    // 0x2f82cc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2f82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2f82d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f82d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f82d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2F82D4u;
    SET_GPR_U32(ctx, 31, 0x2F82DCu);
    ctx->pc = 0x2F82D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82D4u;
            // 0x2f82d8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82DCu; }
        if (ctx->pc != 0x2F82DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82DCu; }
        if (ctx->pc != 0x2F82DCu) { return; }
    }
    ctx->pc = 0x2F82DCu;
label_2f82dc:
    // 0x2f82dc: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2f82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2f82e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2f82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2f82e4:
    // 0x2f82e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f82e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f82ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2f82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2f82f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f82f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f82f4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F82F4u;
    {
        const bool branch_taken_0x2f82f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82f4) {
            ctx->pc = 0x2F834Cu;
            goto label_2f834c;
        }
    }
    ctx->pc = 0x2F82FCu;
    // 0x2f82fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8300: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2f8300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f8304: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2f8304u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f8308: 0x0  nop
    ctx->pc = 0x2f8308u;
    // NOP
    // 0x2f830c: 0x0  nop
    ctx->pc = 0x2f830cu;
    // NOP
    // 0x2f8310: 0x1810  mfhi        $v1
    ctx->pc = 0x2f8310u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f8314: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8314u;
    {
        const bool branch_taken_0x2f8314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8314) {
            ctx->pc = 0x2F8330u;
            goto label_2f8330;
        }
    }
    ctx->pc = 0x2F831Cu;
    // 0x2f831c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f8320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8324: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f8324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f8328: 0xc0be130  jal         func_2F84C0
    ctx->pc = 0x2F8328u;
    SET_GPR_U32(ctx, 31, 0x2F8330u);
    ctx->pc = 0x2F832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8328u;
            // 0x2f832c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F84C0u;
    if (runtime->hasFunction(0x2F84C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F84C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8330u; }
        if (ctx->pc != 0x2F8330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoint__13CGeyserEffectFv_0x2f84c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8330u; }
        if (ctx->pc != 0x2F8330u) { return; }
    }
    ctx->pc = 0x2F8330u;
label_2f8330:
    // 0x2f8330: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f8330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f8338: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f8338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f833c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2f833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f8340: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8340u;
    {
        const bool branch_taken_0x2f8340 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2f8340) {
            ctx->pc = 0x2F834Cu;
            goto label_2f834c;
        }
    }
    ctx->pc = 0x2F8348u;
    // 0x2f8348: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f834c:
    // 0x2f834c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f834cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8354: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8354u;
            // 0x2f8358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F835Cu;
}
